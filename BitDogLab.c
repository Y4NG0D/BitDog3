#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "pico/stdlib.h"         // Biblioteca padrão da Raspberry Pi Pico
#include "pico/binary_info.h"    // Fornece funções para descrever informações do binário
#include "ssd1306.h"             // Controlador de display OLED SSD1306
#include "hardware/i2c.h"        // Biblioteca para comunicação I2C
#include "play_audio.h"          // Biblioteca personalizada para reproduzir áudio

// Definição dos pinos para I2C
const uint I2C_SDA_PIN = 14;     // Pino para a linha de dados SDA
const uint I2C_SCL_PIN = 15;     // Pino para a linha de clock SCL

int main()
{
    stdio_init_all();            // Inicializa a comunicação de entrada/saída padrão (UART)
    setup_audio();               // Configura o áudio (função definida na play_audio.h)

    // Inicialização do barramento I2C
    i2c_init(i2c1, SSD1306_I2C_CLK * 1000);   // Inicializa o I2C com a frequência definida (em kHz)
    gpio_set_function(I2C_SDA_PIN, GPIO_FUNC_I2C);  // Configura o pino SDA para função I2C
    gpio_set_function(I2C_SCL_PIN, GPIO_FUNC_I2C);  // Configura o pino SCL para função I2C
    gpio_pull_up(I2C_SDA_PIN);    // Ativa o resistor pull-up no pino SDA
    gpio_pull_up(I2C_SCL_PIN);    // Ativa o resistor pull-up no pino SCL

    SSD1306_init();               // Inicializa o display OLED SSD1306

    // Define a área de renderização para a tela completa (largura e altura totais do SSD1306)
    struct render_area frame_area = {
        start_col : 0,                             // Início da coluna (esquerda da tela)
        end_col : SSD1306_WIDTH - 1,               // Fim da coluna (direita da tela)
        start_page : 0,                            // Início da página (superior da tela)
        end_page : SSD1306_NUM_PAGES - 1           // Fim da página (inferior da tela)
    };

    calc_render_area_buflen(&frame_area);          // Calcula o tamanho do buffer necessário para renderizar a área

    // Cria um buffer para o display e preenche com zeros (apagando a tela)
    uint8_t buf[SSD1306_BUF_LEN];
    memset(buf, 0, SSD1306_BUF_LEN);               // Limpa o buffer
    render(buf, &frame_area);                      // Renderiza o buffer na tela

restart:

    SSD1306_scroll(true);       // Ativa o recurso de rolagem do display
    sleep_ms(5000);             // Aguarda 5 segundos
    SSD1306_scroll(false);      // Desativa a rolagem

    // Texto que será exibido na tela
    char *text[] = {
        "  Projeto de ",        // Primeira linha
        "  Yan P Lima ",        // Segunda linha
        "           ",          // Linha vazia
        "  Bit Dog 3 "          // Quarta linha
    };

    int y = 0;                  // Posição vertical inicial para a escrita
    for (uint i = 0; i < count_of(text); i++) {  // Itera sobre o texto
        WriteString(buf, 5, y, text[i]);  // Escreve a string no buffer, começando na coluna 5
        y += 8;                           // Avança 8 pixels verticalmente para a próxima linha
    }
    render(buf, &frame_area);             // Renderiza o texto na tela

    // Loop infinito para reproduzir áudio continuamente
    while (true){
        main_audio();                     // Chama a função para reproduzir o áudio
    }

    return 0;                             // Retorna 0 ao final (embora não seja alcançado por causa do loop infinito)
}

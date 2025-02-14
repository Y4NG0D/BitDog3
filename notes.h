// Definições de constantes para as notas musicais
// Os valores representam os períodos correspondentes às frequências das notas em microsegundos
#define NOTE_C4 29886     // Nota Dó na 4ª oitava
#define NOTE_Cs4 28294    // Nota Dó sustenido na 4ª oitava
#define NOTE_C5 14929     // Nota Dó na 5ª oitava
#define NOTE_C6 7465      // Nota Dó na 6ª oitava
#define NOTE_D4 26795     // Nota Ré na 4ª oitava
#define NOTE_D5 13298     // Nota Ré na 5ª oitava
#define NOTE_DS4 25386    // Nota Ré sustenido na 4ª oitava
#define NOTE_E4 24063     // Nota Mi na 4ª oitava
#define NOTE_F4 22823     // Nota Fá na 4ª oitava
#define NOTE_FS5 9561     // Nota Fá sustenido na 5ª oitava
#define NOTE_Fs4 21663    // Nota Fá sustenido na 4ª oitava
#define NOTE_G4 20579     // Nota Sol na 4ª oitava
#define NOTE_G5 8966      // Nota Sol na 5ª oitava
#define NOTE_GS5 9409     // Nota Sol sustenido na 5ª oitava
#define NOTE_GS4 19569    // Nota Sol sustenido na 4ª oitava
#define NOTE_A4 18630     // Nota Lá na 4ª oitava
#define NOTE_AS4 17775    // Nota Lá sustenido na 4ª oitava
#define NOTE_AS5 8380     // Nota Lá sustenido na 5ª oitava
#define NOTE_AS3 33498    // Nota Lá sustenido na 3ª oitava
#define NOTE_B4 16952     // Nota Si na 4ª oitava

// Comprimento total da melodia (número de notas)
#define SONG_B_LENGTH 120

// Melodia completa representada por um array de notas
int melody[] = {
    // Bloco 1: Tema de introdução
    NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5,
    NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4,

    // Bloco 2: Ascendente acelerado
    NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_E4, NOTE_G4, NOTE_C6, NOTE_B4,

    // Bloco 3: Variação energética
    NOTE_D4, NOTE_F4, NOTE_A4, NOTE_D5, NOTE_F4, NOTE_A4, NOTE_D4, NOTE_C4,

    // Bloco 4: Transição com toques de aventura
    NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E4, NOTE_F4,

    // Bloco 5: Motif de ação
    NOTE_G4, NOTE_FS5, NOTE_G5, NOTE_GS5, NOTE_A4, NOTE_AS5, NOTE_B4, NOTE_C6,

    // Bloco 6: Ponte rítmica
    NOTE_C6, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4,

    // Bloco 7: Variedade com toques graves
    NOTE_AS3, NOTE_C4, NOTE_D4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5,

    // Bloco 8: Final animado
    NOTE_D4, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_G4, NOTE_B4, NOTE_C6, NOTE_C4,

    // Bloco 9: Loop de variação rápida
    NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E4, NOTE_F4, NOTE_A4, NOTE_C5,

    // Bloco 10: Encerramento festivo
    NOTE_G5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E4, NOTE_F4, NOTE_C4
};

// Array de durações das notas correspondentes à melodia
int durations[] = {
    // Bloco 1
    4, 8, 8, 4, 8, 8, 4, 4,   // Notas longas e curtas para criar variação rítmica
    8, 8, 8, 16, 8, 8, 8, 8,

    // Bloco 2
    4, 16, 8, 8, 8, 4, 8, 4,

    // Bloco 3
    4, 8, 16, 8, 4, 8, 8, 8,

    // Bloco 4
    8, 8, 4, 4, 8, 4, 8, 4,

    // Bloco 5
    4, 8, 16, 8, 8, 16, 8, 8,

    // Bloco 6
    16, 16, 8, 8, 4, 8, 8, 4,

    // Bloco 7
    8, 8, 8, 16, 8, 4, 8, 8,

    // Bloco 8
    8, 16, 16, 4, 8, 4, 8, 4,

    // Bloco 9
    16, 4, 8, 8, 4, 8, 8, 16,

    // Bloco 10
    8, 8, 4, 8, 8, 8, 16, 16
};

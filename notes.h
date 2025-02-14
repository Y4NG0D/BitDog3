#define NOTE_C4 29886
#define NOTE_Cs4 28294
#define NOTE_C5 14929
#define NOTE_C6 7465
#define NOTE_D4 26795
#define NOTE_D5 13298
#define NOTE_DS4 25386
#define NOTE_E4 24063
#define NOTE_F4 22823
#define NOTE_FS5 9561
#define NOTE_Fs4 21663
#define NOTE_G4 20579
#define NOTE_G5 8966
#define NOTE_GS5 9409
#define NOTE_GS4 19569
#define NOTE_A4 18630
#define NOTE_AS4 17775
#define NOTE_AS5 8380
#define NOTE_AS3 33498
#define NOTE_B4 16952

#define SONG_B_LENGTH 120

// Melodia inspirada em temas de jogos 8/16/32 bits, com mais variações e criatividade
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

int durations[] = {
    // Bloco 1
    4, 8, 8, 4, 8, 8, 4, 4,
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

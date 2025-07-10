#include <stdio.h>
#include <stdbool.h>

// Constantes para facilitar alterações e evitar repetição
#define BISHOP_STEPS 5
#define ROOK_STEPS   5
#define QUEEN_STEPS  8

// Função recursiva para mover o bispo na diagonal direita para cima
void move_bishop(int step) {
    if (step == 0) return;
    printf("CimaDireita\n");
    move_bishop(step - 1);
}

// Função recursiva para mover a torre para a direita
void move_rook(int step) {
    if (step == 0) return;
    printf("Direita\n");
    move_rook(step - 1);
}

// Função recursiva para mover a rainha para a esquerda
void move_queen(int step) {
    if (step == 0) return;
    printf("Esquerda\n");
    move_queen(step - 1);
}

// Movimentação do cavalo em L (para cima e para a direita),
// usando loops com variáveis múltiplas, continue e break
void move_knight_L() {
    // Primeiro segmento: 2 vezes "Cima", usando for com múltiplas variáveis
    for (int i = 0, j = 0; i < 2; i++, j++) {
        if (j > i) {
            // continue ilustrativo
        }
        printf("Cima\n");
    }
    // Segundo segmento: 1 vez "Direita", usando while com break
    int k = 0;
    while (k < 1) {
        printf("Direita\n");
        k++;
        break;
    }
}

int main() {
    printf("---- Movimentação do Bispo (recursiva) ----\n");
    move_bishop(BISHOP_STEPS);

    printf("\n---- Movimentação da Torre (recursiva) ----\n");
    move_rook(ROOK_STEPS);

    printf("\n---- Movimentação da Rainha (recursiva) ----\n");
    move_queen(QUEEN_STEPS);

    printf("\n---- Movimentação do Cavalo (loop aninhado, continue/break) ----\n");
    move_knight_L();

    return 0;
}

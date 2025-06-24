#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros

    // Posiciona horizontalmente na linha 1 (linha 0 do array)
    for (int i = 0; i < 3; i++) {
        tabuleiro[1][i] = 3; // valor 3 representa parte de navio
        printf("Navio horizontal em: [%d][%d]\n", 1, i);
    }

    // Posiciona um navio verticalmente na coluna 4
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][4] = 3;
        printf("Navio vertical em: [%d][%d]\n", i, 4);
    }

    return 0;
}
#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Função recursiva para movimentação do Bispo
void moverBispo(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita Cima");
    moverBispo(movimentos - 1);
}

// Função recursiva para movimentação da Torre
void moverTorre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

// Função para movimentação do Cavalo
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }
}

// Função para movimentação do Cavalo com múltiplas condições
void moverCavaloMestre() {
    for (int i = 0, j = 0; i < 2 || j < 1; i++) {
        if (i < 2) {
            printf("Cima\n");
        }
        if (j < 1) {
            printf("Direita\n");
            j++;
        }
    }
}
// Exibe o resultado na tela.
int main() {
    printf("Movimentando o Bispo:\n");
    moverBispo(BISPO_MOV);

    printf("\nMovimentando a Torre:\n");
    moverTorre(TORRE_MOV);

    printf("\nMovimentando a Rainha:\n");
    moverRainha(RAINHA_MOV);

    printf("\nMovimentando o Cavalo:\n");
    moverCavalo();

    printf("\nMovimentando o Cavalo (Mestre):\n");
    moverCavaloMestre();

    return 0;
}


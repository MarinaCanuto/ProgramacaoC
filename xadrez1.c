#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    
    moverTorre(casas - 1);
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas, int mov1) {
    if (mov1 >= casas) return;
    printf("Cima, Direita\n");
    moverBispo(casas, mov1 + 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimentação do Cavalo usando loops aninhados 
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main() {
    // Movimentação da Torre
    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    // Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 0);

    // Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimentação do Cavalo
    moverCavalo(1);

    return 0;
}

    
         

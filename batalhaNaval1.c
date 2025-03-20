#include <stdio.h>

int tamanhoTabuleiro = 10;  // Define o tamanho do tabuleiro (10x10)
int navio = 3;              // Define o valor para o navio (3)

int main() {
    int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro];  // Criando o tabuleiro 10x10

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            tabuleiro[i][j] = 0;  // Define todas as posições como água (0)
        }
    }
    
    // navio na horizontal
    tabuleiro[2][3] = navio;
    tabuleiro[2][4] = navio;
    tabuleiro[2][5] = navio;
    
    // navio na vertical
    tabuleiro[5][6] = navio;
    tabuleiro[6][6] = navio;
    tabuleiro[7][6] = navio;

    printf("\n**JOGO BATALHA NAVAL**\n");
    printf("\n");
    
    // Exibe as colunas numeradas de 1 a 10
    printf("   ");  // Espaço antes das colunas para melhor alinhamento
    for (int j = 1; j <= tamanhoTabuleiro; j++) {
        printf("%2d ", j);  // Exibe o número da coluna
    }
    printf("\n");  // Nova linha após exibir as colunas
    
    // Exibe o tabuleiro com as linhas numeradas de 1 a 10
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        printf("%2d ", i + 1);  // Exibe o número da linha (1 a 10)
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            printf("%2d ", tabuleiro[i][j]);  // Exibe o valor de cada célula
        }
        printf("\n");  // Nova linha para a próxima linha do tabuleiro
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 1
    char Estado1;
    char Codigo1[4];
    char Cidade1[20];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

    // Carta 1
    printf("Cadastro Carta 1\n");
    printf("Digite o Estado (de A - H): \n");  // Digite a letra inicial do estado entre A e H.
    scanf(" %c", &Estado1);  // Adicionando espaço para o caractere de nova linha

    printf("Digite o código da carta de 1 a 4 (Ex: A1): \n");  // Digite a letra inicial do estado + 1 numero sequencial, ex: A1, A2..)
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n"); 
    scanf(" %s", Cidade1);  // Adicionando espaço para evitar problemas com o caractere de nova linha
    
    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade (em milhões de reais): \n");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    // Exibindo os dados da carta 1 no terminal
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);  
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);        // %.2f indica que queremos mostrar duas casas decimais após o ponto decimal.
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);

    
    printf("\n");  // Espaço para separar as cartas

    // Declaração das variáveis para a carta 2
    char Estado2;
    char Codigo2[4];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

    // Carta 2
    printf("Cadastro Carta 2\n");
    printf("Digite o Estado (de A - H): \n"); 
    scanf(" %c", &Estado2);  // Adicionando espaço para consumir o \n

    printf("Digite o código da carta de 1 a 4 (Ex: A1): \n"); //
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", Cidade2);  // Adicionando espaço para evitar problemas com o caractere de nova linha

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);

    // Exibindo os dados da carta 2 no terminal
    printf("\nCarta 2 \n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);  
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;
}

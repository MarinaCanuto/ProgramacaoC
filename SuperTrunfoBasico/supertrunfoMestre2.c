#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char Estado1, Codigo1[4], Cidade1[50];
    unsigned long int Populacao1;
    float Area1, Pib1;
    int PontosTuristicos1;
    float DensidadePopulacional1, PibPerCapita1;

    // Entrada de dados para a Carta 1
    printf("Cadastro Carta 1\n");
    printf("Digite o Estado (de A - H): ");
    scanf(" %c", &Estado1);

    printf("Digite o código da carta (Ex: A1): ");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &Populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cálculo da Densidade Populacional e PIB per Capita
    DensidadePopulacional1 = Populacao1 / Area1;
    PibPerCapita1 = (Pib1 * 1000000000) / Populacao1;

    // Declaração das variáveis para a Carta 2
    char Estado2, Codigo2[4], Cidade2[50];
    unsigned long int Populacao2;
    float Area2, Pib2;
    int PontosTuristicos2;
    float DensidadePopulacional2, PibPerCapita2;

    // Entrada de dados para a Carta 2
    printf("\nCadastro Carta 2\n");
    printf("Digite o Estado (de A - H): ");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta (Ex: A1): ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &Populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    DensidadePopulacional2 = Populacao2 / Area2;
    PibPerCapita2 = (Pib2 * 1000000000) / Populacao2;

    // Escolha de dois atributos diferentes
    int Atributo1, Atributo2;
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. Área\n");
    printf("2. PIB\n");
    printf("3. Pontos turísticos\n");
    printf("4. Densidade populacional\n");
    scanf("%d", &Atributo1);

    // Garantir que o segundo atributo não seja o mesmo do primeiro
    printf("\nEscolha o segundo atributo (não pode ser o mesmo que o primeiro):\n");
    printf("1. Área\n");
    printf("2. PIB\n");
    printf("3. Pontos turísticos\n");
    printf("4. Densidade populacional\n");
    scanf("%d", &Atributo2);

    if (Atributo1 == Atributo2) {
        printf("Erro: O segundo atributo deve ser diferente do primeiro.\n");
        return 1; // Finaliza o programa se os atributos forem iguais
    }

    // Comparação do primeiro atributo
    float soma1 = 0, soma2 = 0;
    printf("\nComparação dos atributos escolhidos:\n");

    switch (Atributo1) {
        case 1: 
            printf("%s: %.2f km²\n", Cidade1, Area1);
            printf("%s: %.2f km²\n", Cidade2, Area2);
            soma1 = Area1;
            soma2 = Area2;
            break;
        case 2: 
            printf("%s: %.2f bilhões\n", Cidade1, Pib1);
            printf("%s: %.2f bilhões\n", Cidade2, Pib2);
            soma1 = Pib1;
            soma2 = Pib2;
            break;
        case 3: 
            printf("%s: %d\n", Cidade1, PontosTuristicos1);
            printf("%s: %d\n", Cidade2, PontosTuristicos2);
            soma1 = PontosTuristicos1;
            soma2 = PontosTuristicos2;
            break;
        case 4: 
            printf("%s: %.2f\n", Cidade1, DensidadePopulacional1);
            printf("%s: %.2f\n", Cidade2, DensidadePopulacional2);
            soma1 = DensidadePopulacional1;
            soma2 = DensidadePopulacional2;
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    // Comparação do segundo atributo
    switch (Atributo2) {
        case 1: 
            printf("%s: %.2f km²\n", Cidade1, Area1);
            printf("%s: %.2f km²\n", Cidade2, Area2);
            soma1 = Area1;
            soma2 = Area2;
            break;
        case 2: 
            printf("%s: %.2f bilhões\n", Cidade1, Pib1);
            printf("%s: %.2f bilhões\n", Cidade2, Pib2);
            soma1 = Pib1;
            soma2 = Pib2;
            break;
        case 3: 
            printf("%s: %d\n", Cidade1, PontosTuristicos1);
            printf("%s: %d\n", Cidade2, PontosTuristicos2);
            soma1 = PontosTuristicos1;
            soma2 = PontosTuristicos2;
            break;
        case 4: 
            printf("%s: %.2f\n", Cidade1, DensidadePopulacional1);
            printf("%s: %.2f\n", Cidade2, DensidadePopulacional2);
            soma1 = DensidadePopulacional1;
            soma2 = DensidadePopulacional2;
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    // soma dos atributos incluindo nome da cidade e valor da soma
    printf("\nSoma dos atributos para %s: %.2f\n", Cidade1, soma1);
    printf("Soma dos atributos para %s: %.2f\n", Cidade2, soma2);

    // uso do operador ternário
    (soma1 > soma2) ? printf("Vencedor: %s\n", Cidade1) : (soma2 > soma1) ? printf("Vencedor: %s\n", Cidade2) : printf("Empate!\n");

    return 0;
}

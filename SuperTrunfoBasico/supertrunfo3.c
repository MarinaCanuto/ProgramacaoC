#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char Estado1, Codigo1[4], Cidade1[50];  
    unsigned long int Populacao1;
    float Area1, Pib1;
    int PontosTuristicos1;
    float DensidadePopulacional1, PibPerCapita1, SuperPoder1;

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

    // Cálculo do Super Poder para a Carta 1
    SuperPoder1 = Populacao1 + Area1 + Pib1 + PontosTuristicos1 + PibPerCapita1 + (1 / DensidadePopulacional1);

    // Declaração das variáveis para a Carta 2
    char Estado2, Codigo2[4], Cidade2[50];
    unsigned long int Populacao2;
    float Area2, Pib2;
    int PontosTuristicos2;
    float DensidadePopulacional2, PibPerCapita2, SuperPoder2;
    
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

    // Cálculo do Super Poder para a Carta 2
    SuperPoder2 = Populacao2 + Area2 + Pib2 + PontosTuristicos2 + PibPerCapita2 + (1 / DensidadePopulacional2);

    // Comparação e exibição dos resultados
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", (Populacao1 > Populacao2) ? 1 : 2, (Populacao1 > Populacao2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2) ? 1 : 2, (Area1 > Area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (Pib1 > Pib2) ? 1 : 2, (Pib1 > Pib2) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2) ? 1 : 2, (PontosTuristicos1 > PontosTuristicos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 2, (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PibPerCapita1 > PibPerCapita2) ? 1 : 2, (PibPerCapita1 > PibPerCapita2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2) ? 1 : 2, (SuperPoder1 > SuperPoder2) ? 1 : 0);

    return 0;
}
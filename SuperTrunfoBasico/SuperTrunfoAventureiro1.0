
#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char Estado1;
    char Codigo1[4];
    char Cidade1[50];  
    int Populacao1;
    float Area1, Pib1;
    int PontosTuristicos1;
    float DensidadePopulacional1, PibPerCapita1;

    // Entrada de dados para a Carta 1
    printf("Cadastro Carta 1\n");
    printf("Digite o Estado (de A - H): "); // Use a letra inicial do Estado;
    scanf(" %c", &Estado1); // Adicionando espaço para o caractere de nova linha
    
    printf("Digite o código da carta (Ex: A1): "); // Use a letra inicial do Estado + 1 n° entre 1 e 4;
    scanf("%s", Codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade1); // Função permite nomes compostos;
    
    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao1);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &Area1);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &Pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cálculo da Densidade Populacional e PIB per Capita
    DensidadePopulacional1 = Populacao1 / Area1;
    PibPerCapita1 = (Pib1 * 1000000000) / Populacao1; // Convertendo bilhões para reais, Como queremos calcular o PIB per capita em reais, precisamos converter bilhões para unidades normais:


    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);  // %.2f indica que queremos mostrar duas casas decimais após o ponto.
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita1) //

    printf("\n"); // Separação entre as cartas

    // Declaração das variáveis para a Carta 2
    char Estado2;
    char Codigo2[4];
    char Cidade2[50]; // Aumentado para suportar nomes maiores
    int Populacao2;
    float Area2, Pib2;
    int PontosTuristicos2;
    float DensidadePopulacional2, PibPerCapita2;

    // Entrada de dados para a Carta 2
    printf("Cadastro Carta 2\n");
    printf("Digite o Estado (de A - H): ");
    scanf(" %c", &Estado2);
    
    printf("Digite o código da carta (Ex: A1): ");
    scanf("%s", Codigo2);
    
    printf("Digite o nome da cidade: "); // Adicionando espaço para evitar problemas com o caractere de nova linha
    scanf(" %[^\n]", Cidade2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao2);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &Area2);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &Pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    DensidadePopulacional2 = Populacao2 / Area2;
    PibPerCapita2 = (Pib2 * 1000000000) / Populacao2;

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita2);

    return 0;
}

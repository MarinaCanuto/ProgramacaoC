
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    int PontosTuristicos2, Atributos;
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

    // Declaração da variavel atributo para menu interativo.
    printf("\nEscolha um atributo:\n");
    printf("1. Area\n");
    printf("2. Pib\n");
    printf("3. Pontos turisticos\n");
    printf("4. Densidade populacional\n");
    scanf("%d", &Atributos);

    switch (Atributos){
      case 1:
      printf("\nComparação das áreas:\n");
      printf("%s: %.2f km²\n", Cidade1, Area1);
      printf("%s: %.2f km²\n", Cidade2, Area2);

      if(Area1 > Area2){
        printf("Vencedor: %s\n", Cidade1);
       } else if(Area2 > Area1){
        printf("Vencedor: %s\n", Cidade2);
        }else
        printf("Empate!");
        break;

        case 2:
      printf("\nComparação do Pib:\n");
      printf("%s: %f \n",Cidade1, Pib1);
      printf("%s: %f \n",Cidade2, Pib2);

      if(Pib1 > Pib2){
        printf("Vencedor: %s\n", Cidade1);
       } else if(Pib2 > Pib1){
        printf("Vencedor: %s\n", Cidade2);
         } else
        printf("Empate!");
        break;

        case 3:
      printf("\nComparação dos Pontos Turisticos:\n");
      printf("%s: %d \n",Cidade1, PontosTuristicos1);
      printf("%s: %d \n",Cidade2, PontosTuristicos2);

      if(PontosTuristicos1 >PontosTuristicos2){
        printf("Vencedor: %s\n", Cidade1);
       } else if(PontosTuristicos2 > PontosTuristicos1){
        printf("Vencedor: %s\n", Cidade2);
        } else
        printf("Empate!");
        break;


        case 4:
        printf("\nComparação da Densidade populacional:\n");
        printf("%s: %f \n",Cidade1, PontosTuristicos1);
        printf("%s: %f \n",Cidade2, PontosTuristicos2);
  
        if(DensidadePopulacional1 >DensidadePopulacional2){
          printf("Vencedor: %s\n", Cidade1);
        } else if(DensidadePopulacional2 > DensidadePopulacional1){
          printf("Vencedor: %s\n", Cidade2);
            }  else
          printf("Empate!");
          break;
        default:
            printf("Opção invalida.");

        }

        return 0;

      }


  






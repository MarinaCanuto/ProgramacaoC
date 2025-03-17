#include <stdio.h>   

int main(){
    // Movimento da torre usando "FOR"
   printf("\nMovimento da Torre:\n");

   for ( int t = 0; t< 5; t++)
   {
    printf("Direita\n");
   }
   
   // Movimento do bispo usando "WHILE"
   printf("\nMovimento do Bispo:\n");
   int b = 0;

   while (b < 5)
   {
    printf("Cima, Direita\n");
    b++;
   }
   
   // Movimento da Rainha usando "DO WHILE"
   printf("\nMovimento da Rainha:\n");
   int r = 0;

   do {
    printf("Esquerda\n");
    r++;
   } while (r < 8);

    // Movimento do cavalo usando "LOOP FOR e WHILE"
    printf("\nMovimento do Cavalo:\n");

    int c = 1;

    while (c--)
    {
       for (int i = 0; i < 2; i++) {
         printf("Baixo\n"); // Imprime "cima" 2x

       }
       printf("Esquerda\n"); // Imprime "direita" 2x
   }
      
    return 0;
   

}

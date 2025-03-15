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
      
    return 0;
   

}
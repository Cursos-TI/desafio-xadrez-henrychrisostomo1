#include <stdio.h>

int main (){
     
    int i = 1;

    // mover a Torre 5 casas para a direita
    for (int i = 0; i < 5; i++) {
       printf("Direita \n"); // Imprime a direção do movimento
    }
    
    // mover o Bispo 5 casas para cima, direita (diagonal)
    while (i <= 5)
    {
        printf("Cima,Direita \n"); // Imprime direção do movimento
        i++;
    }
  
    // mover o Rainha 8 casas para a esquerda
        do
        {
            printf("Esquerda \n"); // Imprime direção do movimento
            i++;
        } while (i <= 13);
        

    return 0;
}
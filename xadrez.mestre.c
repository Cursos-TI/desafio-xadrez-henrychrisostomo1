#include <stdio.h>

void moverTorre (int casas){
     if (casas > 0){
        printf("Direita \n");
        moverTorre(casas - 1);
        
      }
     }
     void moverBispo (int casas){
     if (casas > 0){
        printf("Cima, Direita \n");
        moverBispo(casas - 1);
        
      
     }
    } 
    void moverRainha (int casas){
     if (casas > 0){
        printf("Esquerda \n");
        moverRainha(casas - 1);
        
      }
     }

int main (){ 
    moverTorre(5);
    moverBispo(5);
    moverRainha(8);
    int i = 1, movimentoCompleto = 1;
    
    while (movimentoCompleto--)
         {
            for (int i = 0; i < 2; i++) {
                printf("Cima \n"); // Imprime "Cima" duas vezes
            }
            printf("Direita \n"); //Imprime "Direita" uma vez
         }
    return 0;
 }


    
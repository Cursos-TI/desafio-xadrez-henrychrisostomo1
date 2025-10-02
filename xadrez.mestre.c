#include <stdio.h>

void moverTorre (int casas){
     if (casas > 0){
        printf("Direita \n");
        moverTorre(casas - 1);
        

     }
}

int main (){ 
    moverTorre(5);

    void moverBispo (int casas){
     if (casas > 0){
        printf("Cima, Direita \n");
        moverBispo(casas - 1);
        

     }
}

int main (){ 
    moverBispo(5);
    return 0;
}
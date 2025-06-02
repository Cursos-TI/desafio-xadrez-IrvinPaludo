#include<stdio.h>

int main(){

    int torre = 4;
    int bispo = 4;
    int rainha = 7;
    int i;

    //movimento da torre 
    printf("Torre move-se\n");
    for ( i = 0; i <= torre; i++)
    {
        printf("Direita\n");
    }

    //movimento do bispo
    printf("Bispo move-se\n");
    for ( i = 0; i <= bispo; i++)
    {
        printf("Cima\n");
        printf("Direita\n");
    }

    //movimento da rainha
    printf("Rainha move-se\n");
    for ( i = 0; i <= rainha; i++)
    {
        printf("Esquerda\n");
    }

    return 0;
}
#include<stdio.h>

int main(){

    int torre = 4;
    int bispo = 4;
    int rainha = 7;
    int cavalo_v = 2 ,cavalo_h = 1 ;
    int i;

    //movimento da torre 
    printf("\n");
    printf("Torre move-se\n");
    for ( i = 0; i <= torre; i++)
    {
        printf("Direita\n");
    }

    //movimento do bispo
    printf("\n");
    printf("Bispo move-se\n");
    for ( i = 0; i <= bispo; i++)
    {
        printf("Cima\n");
        printf("Direita\n");
    }

    //movimento da rainha
    printf("\n");
    printf("Rainha move-se\n");
    for ( i = 0; i <= rainha; i++)
    {
        printf("Esquerda\n");
    }
    //movimento da cavalo
    printf("\n");
    printf("Cavalo move-se\n");
    for ( i = 0; i <= cavalo_v; i++)
    {
        
        printf("Esquerda\n");
        do
        {
            printf("Baixo\n");
            i++;
        } while (i <= cavalo_h);
        
        
    }
    

    return 0;
}
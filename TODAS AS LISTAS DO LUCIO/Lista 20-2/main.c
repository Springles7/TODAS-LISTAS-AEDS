#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void troca1(int *teste, int *tacos,int tamanho){
    int aux[1];
    aux[1] = teste[1];
    teste[1] = tacos[1];
    tacos[1] = aux[1];

    for (int i = 0; i < tamanho; i++) {
        printf("%i", tacos[i]);
    }
    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%i", teste[i]);
    }
}

int main()
{
    int teste[TAM] = {1,2,3,4,5};
    int tacos[TAM] = {9,10,11,12,13};

    troca1(teste,tacos,TAM);

    return 0;
}

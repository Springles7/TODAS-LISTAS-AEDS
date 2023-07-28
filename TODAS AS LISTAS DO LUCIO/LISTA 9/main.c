#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;
    int soma = 0;
    int media;
    int contador = 0;
    do{
        printf("\n Digite um numero: ");
        scanf("%i",&numeros);
        if ( numeros != 0){
            soma += numeros;
            contador++;
        }
    }while(numeros != 0);
    media = soma/contador;
    printf("\n Media : %i",media);
    return 0;
}

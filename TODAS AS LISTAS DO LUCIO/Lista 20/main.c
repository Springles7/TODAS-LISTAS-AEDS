#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[]={'A','A','A','l','o'};
    int tamanho = strlen(palavra);
    int c=0;
    printf("\n Tamanho = %i",tamanho);
    for(int i = 0 ; i < tamanho; i++){
        if(palavra[i] == 'A'){
            c++;
        }
    }
    printf("\n Existem %i letras 'A'",c);


    return 0;
}

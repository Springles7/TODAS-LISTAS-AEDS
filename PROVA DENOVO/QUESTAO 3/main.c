#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocaletras(char *teste,int TAM, char *teste2){
    int j = TAM-1;
    for(int i = 0; i < TAM; i++){
        if(teste[j]  != '\0'){
        teste2[i] = teste[j];
        j--;
        }
    }
    for(int i = 0; i < TAM; i++){
    printf("%c",teste2[i]);
    }
}

int main()
{
    char teste[] = {"Roma"};
    int TAM =strlen(teste);
    char teste2[TAM];

    trocaletras(teste,TAM,teste2);
    return 0;
}

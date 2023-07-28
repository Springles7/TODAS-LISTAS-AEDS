#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocastring(char *teste,int TAM, char *reversao,int j,int i){
        if(i < TAM){
        reversao[i] = teste[j];
        trocastring(teste,TAM,reversao,j-1,i+1);
        }
        else {
        reversao[i] = '\0';
        printf("%s", reversao);
    }
}


int main()
{
    char teste[] = "amor";

    int TAM = strlen(teste);
    int j = TAM -1;
    int i = 0;
    char reversao[TAM];
    trocastring(teste,TAM,reversao,j,i);


    return 0;
}

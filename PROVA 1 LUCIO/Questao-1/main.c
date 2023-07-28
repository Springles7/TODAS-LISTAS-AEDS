#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[7] = {1,2,-7,-9,-20,10,-35};
    char arquivo[] = "Meu Arquivo";
    int arquivo2[7];
    int c = 0 ;

    FILE*arq;
    int i = 0 ;

    fopen(arq,"r");
    if ( arq == NULL){
        printf("\n Erro ao ler arquivo");
    }

    while(i < 7 ){
        fscanf(arq,"%i \n",arquivo2[i]);
        if(arquivo2[i] < 0 ){
            c++;
        }
        i++;
    }
    fclose(arq);
    return 0;
}

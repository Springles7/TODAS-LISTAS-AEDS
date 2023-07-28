#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void trocavalores(int *a,float *b,char *teste,int TAM,char *aux){
    printf("\n Troque o valor de a por : ");
    scanf("%i",a);
    printf("\n Troque o valor de b por : ");
    scanf("%f",b);

    int t = TAM-1;
    for(int i = 0; i < TAM; i++ ){
        aux[i] = teste[t];
        t--;
    }
}

int main()
{

    int *a = malloc(sizeof(int));
    *a = 15;
    float *b = malloc(sizeof(float));
    char teste[] = "amor";
    int TAM = strlen(teste);
    char aux[TAM];
    trocavalores(a,b,teste,TAM,aux);
    printf("\n A = %i \n",*a);
    printf("\n A = %.0f \n",*b);
    printf("\n");
    for(int i=0; i < TAM; i++){
        printf(" %c",aux[i]);
    }
    return 0;
}

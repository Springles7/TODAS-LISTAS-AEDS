#include <stdio.h>
#include <stdlib.h>
#define tam 5

matrizIguais(int *m1,int *m2,int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(m1[i] == m2[i]){
            printf("\n %i posicao e igual nas duas matrizes",i);
        }
        else{
                printf("\n Matriz Nao Iguais");
            printf("\n Parando o Sistema");
            break;
        }
    }
}

int main()
{
    int m1[tam] = {1,2,3,4,6};
    int m2[tam] = {1,2,3,4,5};

    matrizIguais(m1,m2,tam);

    return 0;
}

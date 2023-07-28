#include <stdio.h>
#include <stdlib.h>

int main()
{
    int termos;
    float soma;
    float termo = 1;
    printf("\n Digite a quantidade de termos : ");
    scanf("%i",&termos);
    for (int i = 0; i < termos; i++){
        soma = 1/termo;
        termo = termo*3;
    }
    printf("\n Divisao = %f",soma);
    return 0;
}

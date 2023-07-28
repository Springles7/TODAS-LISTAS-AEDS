#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1;
    int valor2;
    int valor3;
    printf("\n Escrever Tres Valores Ordem Decescente \n");
    printf("\n Valor 1: ");
    scanf("%i",&valor1);
    printf("\n Valor 2: ");
    scanf("%i",&valor2);
    printf("\n Valor 3: ");
    scanf("%i",&valor3);

    if(valor1 > valor2 && valor2 > valor3){
        printf("\n %i %i %i ",valor1,valor2,valor3);
    }
    if(valor2> valor1 && valor1 > valor3){
        printf("\n %i %i %i ",valor2,valor1,valor3);
    }
    if(valor3> valor1 && valor1 > valor2){
        printf("\n %i %i %i ",valor3,valor1,valor2);
    }
    if(valor1> valor3 && valor3 > valor2){
        printf("\n %i %i %i ",valor1,valor3,valor2);
    }
    if(valor3> valor2 && valor2 > valor1){
        printf("\n %i %i %i ",valor3,valor2,valor1);
    }
    if(valor2> valor3 && valor3 > valor1){
        printf("\n %i %i %i ",valor2,valor3,valor1);
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void leiavalores(int *x,int *y){
    printf("\n Digite o valor de X : ");
    scanf("%i", x);
    printf("\n Digite o valor de Y : ");
    scanf("%i", y);
    return x;
}
int somavalores(int *x,int *y){
    int z;
    z = *x+*y;
    return z;
}
void resultado1(int result){
    printf("\n Soma = %i", result);
}


int main()
{

    int *x;
    x= malloc(sizeof(int));
    int *y;
    y= malloc(sizeof(int));
    int *z;
    z= malloc(sizeof(int));

    leiavalores(x,y);
    int resultado = somavalores(x,y);
    resultado1(resultado);

    return 0;
}

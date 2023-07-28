#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1,lado2,lado3;
    printf("\n Digite o primeiro lado: ");
    scanf("%f",&lado1);
    printf("\n Digite o segundo lado: ");
    scanf("%f",&lado2);
    printf("\n Digite o terceiro lado: ");
    scanf("%f",&lado3);
    if( lado1 == lado2 && lado2 == lado3){
        printf("\n Equilatero \n");
    }
    if( lado1 == lado2 && lado1 != lado3){
        printf("\n Isoceles \n");
    }
    if( lado2 == lado3 && lado2 != lado1){
        printf("\n Isoceles \n");
    }
    if( lado3 == lado1 && lado3 != lado2){
        printf("\n Isoceles \n");
    }
    if ( lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        printf("\n Escaleno \n");
    }
    return 0;
}

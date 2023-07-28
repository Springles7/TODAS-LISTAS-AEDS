#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    int expoente;
    float potenciacao;
    printf("\n POTENCIACAO \n");
    do{
    printf("\n Digite sua base: ");
    scanf("%f",&base);
    }while(base < 1);
    do{
    printf("\n Digite seu expoente: ");
    scanf("%i",&expoente);
    }while(expoente < 0);

    for (int i = 0 ; i < expoente; i++){
        potenciacao += base*base;
    }
    printf("\n Resultado : %f ",potenciacao);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Calculo Peso Ideal ");

    int pesoideal;
    int altura;
    char genero;
    printf("\n Digite seu altura: ");
    scanf("%i",&altura);
    do{
    printf("\nVoce e homem ou mulher [M] ou [F]: ");
    scanf("%c", &genero);
    }while (genero != 'F' && genero != 'M');
    if ( genero =='F'){
        pesoideal = 62,1 * altura - 44,7;
        printf("\n Seu peso ideal e de: %i ",pesoideal);
    }
    if ( genero == 'M'){
        pesoideal = 72,7 * altura - 59;
        printf("\n Seu peso ideal e de: %i ",pesoideal);
    }



    return 0;
}

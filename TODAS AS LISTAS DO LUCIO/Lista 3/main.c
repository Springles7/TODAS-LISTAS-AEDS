#include <stdio.h>
#include <stdlib.h>


int main()
{
    int op;
    float numero1,numero2;
    float coringa;
    printf("\n MENU\n ");
    printf("\n 1 - Adicao");
    printf("\n 2 - Subtracao");
    printf("\n 3 - Multiplicacao");
    printf("\n 4 - Divisao Real");
    printf("\n Sua opcao: ");
    scanf("%i",&op);
    printf("\n Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("\n Digite o segundo numero: ");
    scanf("%f",&numero2);
    switch (op){
    case 1:
        coringa = numero1 + numero2;
        printf("\n Adicao = %.0f",coringa);
        break;

    case 2:
        coringa = numero1 - numero2;
        printf("\n Subtracao = %.0f",coringa);
        break;

    case 3:
        coringa = numero1 * numero2;
        printf("\n Multiplicacao = %.0f",coringa);
        break;

    case 4:
        coringa = numero1 / numero2;
        printf("\n Divisao = %.0f",coringa);
        break;
    }
    return 0;
}

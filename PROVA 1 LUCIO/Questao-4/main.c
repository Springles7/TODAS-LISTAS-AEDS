#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4

int main()
{
    int soma = 0;
    int soma2 = 0;
    int teste = LIN -1;;
    int matriz[LIN][COL] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(int i = LIN -1; i >= 0; i-- ){
        soma+= matriz[i][COL - i - 1];
    }
    printf("%i",soma);

     //ABAIXO
     for (int i = 3; i >= 2; i--)
    {
        for (int j = COL - 1; j > COL - 1 - i; j--)
    {
            soma2 += matriz[i][j];
        }
    }

    printf("\n%i", soma2);

    // ACIMA
    for (int i = 0; i < LIN; i++)
    {
        for (int j = COL - 2 - i; j >= 0; j--)
        {
            printf("\n %i ", matriz[i][j]);
        }
    }

    return 0;
}

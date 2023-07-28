#include <stdio.h>
#include <stdlib.h>

int main()
{
    int termos;
    int termo1 = 0;
    int termo2 = 1;
    int termo3;
    printf("\n TERMOS FIBONNACI \n");
    printf("\n Digite quantidade de termos: ");
    scanf("%i",&termos);
    for (int i = 0; i < termos; i++){
        termo3 = termo2;
        termo2 += termo1;
        termo1 = termo3;
        printf(" %i ",termo2);
    }
    return 0;
}

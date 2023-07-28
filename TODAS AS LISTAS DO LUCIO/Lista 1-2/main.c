#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    int bissexto;
    printf("\n O ano e bissexto ? \n ");
    printf("\n Digite seu ano: ");
    scanf("%i",&ano);
    if ((ano % 4) == 0){
        printf("\n E bissexto \n");
    }
    else{
        printf("\n Nao Bissexto \n");
    }
    return 0;
}

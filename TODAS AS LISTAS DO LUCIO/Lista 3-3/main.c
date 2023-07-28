#include <stdio.h>
#include <stdlib.h>

int main()
{
    float op;
    int peso;
    int peso1;
    do{
        printf("\n Selecione o planeta que deseja testar");
        printf("\n 1- Mercurio");
        printf("\n 2- Venus");
        printf("\n 3- Marte");
        printf("\n 4- Jupiter");
        printf("\n 5- Saturno");
        printf("\n 6- Urano");
        printf("\n Sua op: ");
        scanf("%f",&op);
    }while( op < 1 || op > 6);
    printf("\n Digite seu peso: ");
    scanf("%i",&peso);
    if (op == 1){
    peso1 = peso * 0.37;
    printf(" Seu peso : %i",peso1);
    }
    if (op == 2){
    peso1 = peso * 0.88;
     printf(" Seu peso : %i",peso1);
    }
    if (op == 3){
    peso1 = peso * 0.38;
    printf(" Seu peso : %i",peso1);
    }
    if (op == 4){
    peso1 = peso * 2.64;
     printf(" Seu peso : %i",peso1);
    }
    if (op == 5){
    peso1 = peso * 1.15;
    printf(" Seu peso : %i",peso1);
    }
    if (op == 6){
    peso1 = peso * 1.17;
     printf(" Seu peso : %i",peso1);
    }
    return 0;
}

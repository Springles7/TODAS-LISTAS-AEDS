#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dia;
    do{
    printf("\n Digite um dia da semana: ");
    scanf("%f",&dia);
    }while(dia < 1 || dia > 7);
    if(dia == 1){
        printf("\n Domingo");
    }
    if(dia == 2){
        printf("\n Segunda");
    }
    if(dia == 3){
        printf("\n Terca");
    }
    if(dia == 4){
        printf("\n Quarta");
    }
    if(dia == 5){
        printf("\n Quinta");
    }
    if(dia == 6){
        printf("\n Sexta");
    }
    if(dia == 7){
        printf("\n Sabado");
    }
    return 0;
}

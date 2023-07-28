#include <stdio.h>
#include <stdlib.h>

int main()
{
    float op;
    do{
    printf("\n Digite o numero do mes: ");
    scanf("%f",&op);
    }while(op < 1 || op > 12);
    if (op == 1 ){
        printf("\n Qtd de mes janeiro: 30");
    }
    if (op == 2 ){
        printf("\n Qtd de mes fevereiro: 30");
    }
    if (op == 3 ){
        printf("\n Qtd de mes marco: 30");
    }
    if (op == 4 ){
        printf("\n Qtd de mes abril: 30");
    }
    if (op == 5 ){
        printf("\n Qtd de mes maio: 30");
    }
    if (op == 6 ){
        printf("\n Qtd de mes junho: 30");
    }
    if (op == 7 ){
        printf("\n Qtd de mes julho: 30");
    }
    if (op == 8){
        printf("\n Qtd de mes agosto: 30");
    }
    if (op == 9 ){
        printf("\n Qtd de mes setembro: 30");
    }
    if (op == 10 ){
        printf("\n Qtd de mes outubro: 30");
    }
    if (op == 11 ){
        printf("\n Qtd de mes novembro: 30");
    }
    if (op == 12 ){
        printf("\n Qtd de mes dezembro: 30");
    }
    return 0;
}

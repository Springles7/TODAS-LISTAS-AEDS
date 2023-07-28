#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primo;
    int divisor;
    int soun = 1;
    printf("\n PRIMO OU NAO PRIMO \n");
    do{
    printf("\n Digite o numero que quer testar : ");
    scanf("%i",&primo);
    if(primo < 1){
        printf("\n Digite um numero maior que 0");
    }
    }while(primo < 1);

    for(divisor = 2; divisor*divisor <= primo; divisor++ ){
        if (primo % divisor == 0 ){
            soun = 0;
            break;
        }
    }
    if (soun){
        printf("\n Numero e Primo");
    }
    else{
        printf("\n Numero nao e Primo");
    }
    return 0;
}

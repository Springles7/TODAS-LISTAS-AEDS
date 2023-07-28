#include <stdio.h>
#include <stdlib.h>
void trocavalor(int *a,int *b){
    if(*a > *b){
        printf("%i e maior que %i",*a,*b);
    }
    else{
        int maior;
        maior = *a;
        *a = *b;
        *b = maior;
        printf("\n %i e maior que %i",*a,*b);
    }
}

int main()
{
    int a = 35;
    int b = 50;

    trocavalor(&a,&b);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void trocavalores(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return a,b;
}

int main()
{
   int a = 10;
   int b = 99;
   printf("\n A = %i",a);
   printf("\n B = %i",b);

   trocavalores(&a,&b);

   printf("\n A = %i",a);
   printf("\n B = %i",b);
    return 0;
}


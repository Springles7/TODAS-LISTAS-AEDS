#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int *pa,*pb;
    printf("\n A = ");
    scanf("%i",&a);
    printf("\n B = ");
    scanf("%i",&b);

    pa = &a;
    pb = &b;

    if(*pa > *
       pb ){
        printf("\n A e maior");
    }
    else{
        printf("\n B e maior");
    }
    return 0;
}

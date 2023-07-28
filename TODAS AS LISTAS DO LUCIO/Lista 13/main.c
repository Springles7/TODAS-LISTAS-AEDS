#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *x;
    x= malloc(sizeof(int));
    int *y;
    y= malloc(sizeof(int));
    int *z;
    z= malloc(sizeof(int));
    scanf("%i",x);
    scanf("%i",y);
    *z = *y + *x;
    printf("%i", *z);
    return 0;
}

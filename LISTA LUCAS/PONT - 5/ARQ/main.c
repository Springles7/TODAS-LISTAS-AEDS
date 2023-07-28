#include <stdio.h>
#include <stdlib.h>
void dobravalor(int *a,int *b){
    *a = *a *2;
    *b = *b * 2;
    printf("\n A = %i",*a);
    printf("\n B = %i",*b);
}

int main()
{
    int a = 35;
    int b = 50;

    printf("\n A = %i",a);
    printf("\n B = %i",b);
    dobravalor(&a,&b);

    return 0;
}

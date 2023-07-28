#include <stdio.h>
#include <stdlib.h>
void passavalor(int *a, int b){
    *a = *a +b;
}

int main()
{
    int a = 10;
    int b = 10;
    printf("\n %i ",a);
    passavalor(&a,b);
    printf("\n %i ",a);
    return 0;
}

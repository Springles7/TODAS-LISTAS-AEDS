#include <stdio.h>
#include <stdlib.h>
int dobrorec(int x){
    x= x*2;
    return x;
}

int main()
{
    int x=5;
    printf("O dobro de %i",x);
    printf(" eh igual a %i",dobrorec(x));
    return 0;
}

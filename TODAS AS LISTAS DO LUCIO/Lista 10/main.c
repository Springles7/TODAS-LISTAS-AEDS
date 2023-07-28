#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 10;
    int num2 = 100;
    printf("\n %i/%i",num1,num2);
    for(int i = 0; i < 5; i++){
        num1++;
        num2--;
        printf("\n %i/%i",num2,num1);
        num1++;
        num2--;
        printf("\n %i/%i",num1,num2);
    }
    return 0;
}

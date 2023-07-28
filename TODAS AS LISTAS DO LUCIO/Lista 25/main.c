#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    int array[10]={1,2,-1,-5,6,-3,2,7,-2,-8};
    for(int i = 0; i < 10; i++){
            if(array[i] < 0){
                c++;
            }
    }
    printf("Existem %i numeros negativos ",c);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define tamanho 10
void invertearray(float *array1){
    int tam1= tamanho;
    float array2[tamanho];
    for(int i = 0; i < tamanho; i++){
        array2[i] = array1[tam1-1];
        tam1--;
    }
    for(int i = 0; i < tamanho; i++){
        printf("%.0f ",array2[i]);
    }

}

int main()
{
    float array1[tamanho] = {1,2,3,4,5,6,7,8,9,10};

    invertearray(array1);
    return 0;
}

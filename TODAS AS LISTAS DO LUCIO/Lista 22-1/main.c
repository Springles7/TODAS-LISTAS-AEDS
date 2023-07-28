#include <stdio.h>
#include <stdlib.h>
#define num_lin 4
#define num_col 2
void matrizcomchave(int m1[num_lin][num_col]){
    int j = 0 ;
    for (int i = 0; i < num_lin ; i++){
            for(int c=0; c < num_col; c++){
        if(m1[i][c] == 1){
            j++;
        }
        }
    }
    printf("\n Existem %i termos '1' na sua matriz",j);
}
int main()
{
    int m1[num_lin][num_col]={1,2,1,1,1,4,3,2};
    matrizcomchave(m1);
    return 0;
}

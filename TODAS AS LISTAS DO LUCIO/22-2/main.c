#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define num_lin 4
#define num_col 2

bool temchave(int m1[num_lin][num_col],int chave){
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            if(m1[i][j] == chave){
                return true;
                break;
            }
        }
    }
    return false;
}

int main()
{
    int chave;
    printf("\n Digite sua chave : ");
    scanf("%i",&chave);
    int m1[num_lin][num_col] = {1,2,3,4,5,6,12,15};
    bool z = temchave(m1,chave);
    if(z){
        printf("\n Na matriz, possui a chave %i",chave);
    }
    else{
        printf("\n Nao possui a chave %i!",chave);
    }
    return 0;
}

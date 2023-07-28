#include <stdio.h>
#include <stdlib.h>
#define num_lin 4
#define num_col 4

int mediadiagonalprincipal(int m1[num_lin][num_col]){
    int z;
    int media;
    int c=0;
    if(num_col == num_lin){
    for (int i = 0; i < num_lin; i++){
        z +=m1[i][i];
        c++;
        }
    media = z/c;
    return media;
    }
     return 0;
}

int main()
{
    int m1[num_lin][num_col] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int x = mediadiagonalprincipal(m1);
    printf("\n A media e igual a %i",x);
    return 0;
}


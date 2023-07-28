#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10]= {-1,-3,5,7,-2,-10,-20,10,12,-8};

    FILE*file;
    file = fopen("data.txt","w");

    for (int i = 0; i < 10; i++){
        if(vetor[i] >= 0){
            fprintf(file,"%i\n",vetor[i]);
        }
    }
    fclose(file);

    return 0;
}

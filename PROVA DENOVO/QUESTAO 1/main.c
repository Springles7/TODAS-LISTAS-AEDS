#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
    int vetor[TAM] = {-1,-2,3,4,-5};
    FILE*file;
    file = fopen("arquivo.txt","w");
    int vetorteste[TAM] = {-2,-7,9,-4,1};
    for(int i = 0; i < TAM; i++){
    fprintf(file,"%i\n",vetorteste[i]);
    }
    fclose(file);
    int outrovetor[TAM];
    file = fopen("arquivo.txt","r");
    int c =0;
    for(int i = 0; i < TAM; i++){
    fscanf(file,"%i\n",&outrovetor[i]);
    if(outrovetor[i] < 0 ) {
        c++;
    }
    }
    int j =0;
    for(int i = 0; i < TAM; i++){
        if(vetor[i] < 0 ){
            j++;
        }
    }
    if(c == j){
        printf("\n Iguais");
    }
    else{
        printf("\n Diferentes");
    }



    return 0;
}

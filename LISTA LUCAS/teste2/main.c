#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10] = {1,2,3,-5,-7,-8,10,-25,-35,-15};
    int k =0;
    for(int i = 0 ; i < 10; i++){
        if(vetor[i] < 0 ){
            k++;
        }
    }
    char nome[] = "teste.txt";
    FILE*file;
    file = fopen(nome,"w");
    for(int i = 0; i < 11; i++){
    fprintf(file,"%i",vetor[i]);
    }
    fclose(file);
    file = fopen(nome,"r");
    int i = 0;
    int c = 0;
    while(fscanf(file,"%i",&i) != EOF){
        if( i < 0 ){
            c++;
        }
    }
    fclose(file);
    if(c == k){
        printf("\n Sao iguais");
    }
    else{
        printf("\n Nao sao iguais");
    }
    return 0;
}

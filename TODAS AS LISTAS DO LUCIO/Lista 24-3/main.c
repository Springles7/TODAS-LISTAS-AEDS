#include <stdio.h>
#include <stdlib.h>

void amplitude(FILE*file){
    int numeros[5];
    int numeros2[5];
    int maior = 0;
    int menor = 100;
    file = fopen("amplitude2.txt","w");
    for(int i = 0; i < 5; i++){
    printf("\n Digite varios numeros: ");
    scanf("%i",&numeros[i]);
    fprintf(file,"%i\n",numeros[i]);
    }
    fclose(file);
    file = fopen("amplitude2.txt","r");
    for(int i = 0; i < 5; i++){
            fscanf(file,"%i\n",&numeros2[i]);
            if(numeros2[i] > maior){
                maior = numeros2[i];
            }
            if(numeros2[i] < menor){
                menor = numeros2[i];
            }
            }
            printf("\n Maior : %i \n Menor: %i",maior,menor);
}

int main()
{
    FILE*file;
    amplitude(file);
    return 0;
}

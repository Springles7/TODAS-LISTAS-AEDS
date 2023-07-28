#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*file;
    file=fopen("teste.txt","w");
    if(file == NULL){
        printf("\n Erro ao criar arquivo!\n");
    }
    int idade = 18;
    int idadepai = 49;
    int idademae = 47;
    fprintf(file,"%i\n",idade);
    fprintf(file,"%i\n",idadepai);
    fprintf(file,"%i\n",idademae);
    fclose(file);
    file=fopen("teste.txt","r");
    if(file == NULL){
        printf("\n Erro ao criar arquivo!\n");
    }
    int valor1,valor2,valor3;
    fscanf(file,"%i\n%i\n%i\n",&valor1,&valor2,&valor3);
    printf("\n %i",valor1);
    printf("\n %i",valor2);
    printf("\n %i",valor3);
    fclose(file);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertestring(char string1[],int TAM,char string2[]){
    int teste = TAM;
    for(int i = 0; i < TAM; i++){
        string2[i] = string1[teste-1];
        teste--;
    }
    for(int i = 0; i < TAM; i++){
        printf("%c",string2[i]);
    }
}

int main()
{
    char string1[] = "amor";
    int TAM = strlen(string1);
    char string2[TAM];
    invertestring(string1,TAM,string2);
    return 0;
}

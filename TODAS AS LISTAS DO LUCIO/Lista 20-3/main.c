#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool validaoun(int nota){
    bool valida = false;
    if (nota < 0 || nota > 100){
       return valida=false;
    }
    else{
        return valida=true;
    }
}


int main()
{
    int nota;
    validaoun(nota);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("teste.txt","w");
    fprintf(file,"Oi");
    fclose(file);
    return 0;
}

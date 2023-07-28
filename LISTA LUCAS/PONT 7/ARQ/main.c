#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("teste1.txt", "w");
    if (file == NULL) {
        printf("\nErro ao abrir o arquivo");
        return 1;
    }
    fprintf(file, "abcdefghijklmnopqrstuvwxyz");
    fclose(file);

    file = fopen("teste1.txt", "r");
    if (file == NULL) {
        printf("\nErro ao abrir o arquivo");
        return 1;
    }
    char teste[1000];
    int c = 0;
    while (fscanf(file, "%c", &teste[c]) != EOF) {
        c++;
    }
    printf("\n Existem %i letras no arquivo ", c);
    fclose(file);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void inverteArray(int *teste, int tamanho) {
    int aux[TAM];
    int j = TAM - 1;
    for (int i = 0; i < TAM; i++) {
        aux[i] = teste[j];
        j--;
    }
    for (int i = 0; i < tamanho; i++) {
        printf("%i", aux[i]);
    }
}

int main() {
    int teste[TAM] = {1, 2, 3, 4, 5};
    inverteArray(teste, TAM);
    return 0;
}

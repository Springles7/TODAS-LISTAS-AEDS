#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 5

bool validaoun(int notas) {
    return (notas >= 0 && notas <= 100);
}

void leianotas(int *notas, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite a nota: ");
        scanf("%i", &notas[i]);
        if (validaoun(notas[i])) {
            if (notas[i] >= 60) {
                printf("\nAprovado!\n");
            } else {
                printf("\nReprovado!\n");
            }
        } else {
            printf("\nNota Inválida!\n");
        }
    }
}

int main() {
    int notas[TAM];
    leianotas(notas, TAM);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void alocafuncao(int **x, int **y) {
    *x = malloc(sizeof(int));
    *y = malloc(sizeof(int));
}

void leiaxy(int *x, int *y) {
    printf("\nDigite o valor de x: ");
    scanf("%d", x);
    printf("Digite o valor de y: ");
    scanf("%d", y);
}

void maiorentre(int *x, int *y) {
    if (*x > *y) {
        printf("\nX MAIOR QUE Y\n");
    } else {
        printf("\nY MAIOR QUE X\n");
    }
}

int main() {
    int *x, *y;
    alocafuncao(&x, &y);
    leiaxy(x, y);
    maiorentre(x, y);

    return 0;
}

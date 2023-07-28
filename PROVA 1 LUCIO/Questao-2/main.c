#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void leiafunc(int *a) {
    printf("\nDigite o valor de a: ");
    scanf("%i", a);
}

void leiafunc2(int *b) {
    printf("\nDigite o valor de b: ");
    scanf("%i", b);
}

bool maiorentre(int *a1, int *b1) {
    if (*a1 > *b1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *a1 = malloc(sizeof(int));
    int *b1 = malloc(sizeof(int));

    leiafunc(a);
    leiafunc2(b);

    *a1 = *a;
    *b1 = *b;

    bool check = maiorentre(a1, b1);

    if (check) {
        printf("\nA e MAIOR QUE B");
    } else {
        printf("\nB e MAIOR QUE A");
    }


    return 0;
}

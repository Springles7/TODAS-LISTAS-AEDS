#include <stdio.h>
#include <stdlib.h>

void fibofunc(int *fibonacci, int n) {
    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        printf("%i\n", fibonacci[i]);
    }
}

int main() {
    int n;
    printf("Digite a quantidade de termos: ");
    scanf("%i", &n);

    int fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    printf("%i\n", fibonacci[0]);
    printf("%i\n", fibonacci[1]);

    fibofunc(fibonacci, n);

    return 0;
}

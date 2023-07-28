#include <stdio.h>

int main() {
    int primo;
    printf("Verifica Primo\n");
    do {
        printf("Digite seu numero: ");
        scanf("%i", &primo);
        if (primo < 1) {
            printf("Digite um numero valido!\n");
        }
    } while (primo < 1);

    int c = 0;
    for (int i = 1; i <= primo; i++) {
        if ((primo % i) == 0) {
            c++;
        }
    }

    if (c == 2) {
        printf("Numero PRIMO\n");
    } else {
        printf("Numero NAO PRIMO\n");
    }

    return 0;
}

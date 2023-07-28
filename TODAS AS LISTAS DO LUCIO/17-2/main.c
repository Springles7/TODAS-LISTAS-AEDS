#include <stdio.h>

void torreHanoi(int n, int pinoInicial, int pinoDestino, int pinoTemporario) {
    if (n == 1) {
        printf("%d -> %d\n", pinoInicial, pinoDestino);
        return;
    }

    torreHanoi(n - 1, pinoInicial, pinoTemporario, pinoDestino);
    printf("%d -> %d\n", pinoInicial, pinoDestino);
    torreHanoi(n - 1, pinoTemporario, pinoDestino, pinoInicial);
}

int main() {
    int n = 3; // N�mero de discos
    int pinoInicial = 1; // Pino inicial
    int pinoDestino = 3; // Pino destino
    int pinoTemporario = 2; // Pino tempor�rio

    printf("Instru��es para resolver as Torres de Han�i com 64 discos:\n");
    torreHanoi(n, pinoInicial, pinoDestino, pinoTemporario);

    return 0;
}

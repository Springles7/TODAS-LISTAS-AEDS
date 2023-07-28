#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 4

int diagonalsecundaria(int matriz[LIN][COL]) {
    int soma=0;
    int soma2=0;
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            if (j < (COL - i - 1)) {
                printf("%d ", matriz[i][j]);
                soma += matriz[i][j];
            }
        }
    }
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            if (j > (COL - i - 1)) {
                printf("%d ", matriz[i][j]);
                soma2 += matriz[i][j];
            }
        }
    }
    return (soma+soma2)/2;
}



int main() {
    int matriz[LIN][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int z = diagonalsecundaria(matriz);
    printf("%i",z);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4
int diagonalacima(int matriz[LIN][COL]){
    int maior = 0;
    for(int i = 0; i < LIN; i++){
        for(int j= 0; j < COL; j++){
            if(j < (COL - 1 - i)){
                printf("%i",matriz[i][j]);
                if(matriz[i][j] > maior){
                    maior = matriz[i][j];
                }
            }
        }
    }
    return maior;
}
int diagonalabaixo(int matriz[LIN][COL]){
    int maior;
    printf("\n");
    for(int i = 3; i > 0; i--){
        for(int j= 1; j < COL; j++){
            if(j > (COL - 1 - i)){
                printf("%i",matriz[i][j]);
                if(matriz[i][j] > maior){
                    maior = matriz[i][j];
                }
            }
        }
    }
    return maior;
}

int main()
{
    int matriz[LIN][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int z = diagonalacima(matriz);
    int y = diagonalabaixo(matriz);
    printf("\n");
    int media = (z+y)/2;
    printf("A media entre %i e %i e %i",y,z,media);
    return 0;
}

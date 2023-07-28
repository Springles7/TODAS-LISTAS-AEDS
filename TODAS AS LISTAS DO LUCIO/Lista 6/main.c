#include <stdio.h>
#include <stdlib.h>

int main()
{
    float op;
    float chapa1;
    float chapa2;
    float nulo;
    float conta;
    float percentual;
    do{
        printf("\n Ler Votos Das Chapas \n");
        printf("\n 0 - Sair do Programa");
        printf("\n 1 - Chapa 1");
        printf("\n 2 - Chapa 2");
        printf("\n 3 - Voto em Branco");
        printf("\n Sua op: ");
    scanf("%f",&op);
    if(op >=0 || op <= 3){
        if (op == 1){
            conta++;
            chapa1++;
        }
        if (op == 2){
            conta++;
            chapa2++;
        }
        if (op == 3){
            conta++;
            nulo++;
        }
    }
    else{
            system("cls");
        printf("\n Digite um numero do menu !");
    }
    }while(op != 0);
    if(op == 0){
        printf("\n VOTOS : \n");
        printf("\n Chapa 1 : %.0f",chapa1);
        printf("\n Chapa 2 : %.0f",chapa2);
        printf("\n Nulos/Branco : %.0f",nulo);

        if (chapa1 > chapa2){
                percentual = chapa1 / conta * 100;
            printf("\n Chapa 1 venceu com um porcentual de %.0f porcento dos votos",percentual);
        }
        if (chapa2 > chapa1){
                percentual = chapa2 / conta * 100;
            printf("\n Chapa 2 venceu com um porcentual de %.0f porcento dos votos",percentual);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    float i;
    float media;
    float soma;
    float alunos;
    float notamaior = 0;
    float notamenor = 100;
    printf("\n Numero de alunos: ");
    scanf("%f",&alunos);
    do{
    do{

    printf("\n Digite sua nota: ");
    scanf("%f",&nota);
    if(nota < 0 || nota > 100){
        printf("\n Digite uma nota entre 0 e 100");
    }
    if (nota >= 0 || nota < 101){
        soma += nota;
    }
    if (notamaior < nota ){
        notamaior = nota;
    }
    if (notamenor > nota ){
        notamenor = nota;
    }
    i++;
    }while(nota < 0 || nota > 100);
    }while(i < alunos);

    media = soma/alunos;
    printf("\n Media da turma : %.0f",media);
    printf("\n Maior nota: %.0f ",notamaior);
    printf("\n Menor nota: %.0f",notamenor);
    printf("\n Numero de alunos: %.0f",alunos);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int alunos;
    int i = 0;
    FILE*file2;
    file2 = fopen("alunos.txt","w");
    printf("\n Digite quantos alunos sao: ");
    scanf("%i",&alunos);
    int alunonota[alunos];
    do{
        printf("\n Digite a nota do aluno : ");
        scanf("%i",&alunonota[i]);
        i++;
        }while( alunonota[i] != 0 && i < alunos);
    for(int i = 0; i < alunos; i++){
        fprintf(file2,"%i\n",alunonota[i]);
    }
fclose(file2);
    return 0;
}

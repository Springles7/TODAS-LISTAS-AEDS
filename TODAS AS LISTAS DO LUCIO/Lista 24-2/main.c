#include <stdio.h>
#include <stdlib.h>

int menu(int op){
    printf("\n 0 - Sair do programa");
    printf("\n 1 - Cadastrar Senha");
    printf("\n 2 - Validar Senha");
    printf("\n Sua opcao : ");
    scanf("%i",&op);
    return op;
}

int main()
{
    FILE*file;
    int senha,csenha,senhav;
    int senharq;
    int op;
    do{
    op = menu(op);
    if(op == 0){
            system("cls");
        printf("\n Obrigado por usar o programa!\n");
        return 0;
    }
    if(op == 1){
            system("cls");
    file= fopen("senhas.dat","w");
    if(file == NULL){
            printf("\n ERRO CRIAR ARQUIVO ");
        }
    printf("\n Digite sua senha : ");
    scanf("%i",&senha);
    printf("\n Confirme sua senha : ");
    scanf("%i",&csenha);
    if(senha == csenha){
        printf("\n Senha cadastrada com sucesso");
        fprintf(file,"%i",senha);
        fclose(file);
    system("cls");
    }
    }
    if(op == 2){
        system("cls");
        file= fopen("senhas.dat","r");
        if(file == NULL){
            printf("\n ERRO AO LER ARQUIVO ");
        }
        fscanf(file,"%i",&senharq);
        printf("\n Digite sua senha : ");
        scanf("%i",&senhav);
        if(senhav == senharq){
            printf("\n Senha Correta\n");
        }
        else{
            printf("\n Senha incorreta\n");
        }
        fclose(file);

    }
}while(op != 0);
return 0;
}

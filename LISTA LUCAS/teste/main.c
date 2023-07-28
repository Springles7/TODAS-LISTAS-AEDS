#include <stdio.h>
#include <stdlib.h>

int menu(int op) {
    op = 0;
    printf("\n 1 - Cadastrar Senha");
    printf("\n 2 - Validar Senha");
    printf("\n Sua op : ");
    scanf("%i", &op);
    opcaoteste(op);
    return op;
}

void opcaoteste(int op) {
    int senha;
    int senha1;
    int csenha;
    if (op == 0) {
        printf("\n Obrigado por usar o programa");
        return;
    }
    if (op == 1) {
        printf("\n Digite sua senha: ");
        scanf("%i", &senha);
        printf("\n Confirme sua senha: ");
        scanf("%i", &csenha);
        if (csenha == senha) {
            FILE* file;
            file = fopen("senhas.dat", "w");
            fprintf(file, "%i", senha);
            fclose(file);
            printf("\n Senha cadastrada com sucesso");
            menu(op);
        } else {
            printf("\n As senhas não coincidem");
        }
    }
    if (op == 2) {
        FILE* file;
        file = fopen("senhas.dat", "r");
        if (file == NULL) {
            printf("\n Erro ao abrir o arquivo");
            return;
        }
        fscanf(file, "%i", &senha1);
        fclose(file);
        printf("\n Digite a senha: ");
        scanf("%i", &senha);
        if (senha1 == senha) {
            printf("\n Senha Correta");
        } else {
            printf("\n Senha Incorreta");
        }
    }
}

int main() {
    int op;
    op = menu(op);
    return 0;
}

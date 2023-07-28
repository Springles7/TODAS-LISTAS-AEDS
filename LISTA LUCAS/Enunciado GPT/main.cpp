#include <iostream>

using namespace std;

class Aluno{
private:
    string nome;
    string curso;
    int medianotas;
    int matricula;
public:
    void setNome(string nome){
        this-> nome = nome;
    }
    string getNome(){
        return this->nome;
    }
    void setCurso(string curso){
        this-> curso = curso;
    }
    string getCurso(){
        return this->curso;
    }
    void setMediaNotas(int medianotas){
        this-> medianotas = medianotas;
    }
    int getMediaNotas(){
        return this-> medianotas;
    }
    void setMatricula(int matricula){
        this-> matricula = matricula;
    }
    int getMatricula(){
        return this-> matricula;
    }
    void LeiaAluno(){
        int matricula;
        int medianotas;
        string nome;
        string curso;
        cout << "\nNome : ";
        cin >> nome;
        cout << "\nCurso : ";
        cin >> curso;
        cout << "\nMatricula : ";
        cin >> matricula;
        cout << "\n Media das Notas : ";
        cin >> medianotas;
        setMediaNotas(medianotas);
        setCurso(curso);
        setNome(nome);
        setMatricula(matricula);
    }
    void EscrevaArquivo() {
    FILE* file;
    file = fopen("Aluno%i.txt", "w");
    fprintf(file, "%s\n", getNome().c_str());
    fprintf(file, "%s\n", getCurso().c_str());
    fprintf(file, "%d\n", getMatricula());
    fprintf(file, "%d\n", getMediaNotas());
    fclose(file);
}

    void ListaALUNO() {
    FILE* file;
    file = fopen("Aluno.txt", "r");
    char nomealuno[100];
    char cursoaluno[100];
    int mediaaluno;
    int matriculaaluno;

    fscanf(file, "%99s", nomealuno);
    fscanf(file, "%99s", cursoaluno);
    fscanf(file, "%i", &mediaaluno);
    fscanf(file, "%i", &matriculaaluno);
    printf("\n Nome : %s\n", nomealuno);
    printf("\n Curso : %s\n", cursoaluno);
    printf("\n Matricula : %i\n", matriculaaluno);
    printf("\n Media das Notas : %i\n", mediaaluno);
    fclose(file);
}

    void menu(int op){
    do{
    printf("\n 1 - Cadastrar Aluno");
    printf("\n 2 - Listar Aluno");
    printf("\n 3 - Sair");
    printf("\n Sua opcao : ");
    scanf("%i",&op);
    if(op == 1){
        LeiaAluno();
        EscrevaArquivo();
    }
    if(op == 2){
        ListaALUNO();
    }
    if(op == 0){
        printf("\n Obrigado Por Usar o Programa");
    }
    }while(op != 0);

}

};

int main() {
    const int MAX_ALUNOS = 5;  // Defina o número máximo de alunos a serem cadastrados
    Aluno alunos[MAX_ALUNOS];  // Vetor de objetos Aluno
    int op = 0;
    int numAlunos = 0;  // Contador de alunos cadastrados

    do {
        cout << "\n1 - Cadastrar Aluno";
        cout << "\n2 - Listar Alunos";
        cout << "\n3 - Sair";
        cout << "\nSua opcao: ";
        cin >> op;

        if (op == 1) {
            if (numAlunos < MAX_ALUNOS) {
                alunos[numAlunos].LeiaAluno();
                alunos[numAlunos].EscrevaArquivo();
                numAlunos++;
                cout << "\nAluno cadastrado com sucesso!\n";
            } else {
                cout << "\nLimite de alunos atingido!\n";
            }
        } else if (op == 2) {
            for (int i = 0; i < numAlunos; i++) {
                alunos[i].ListaALUNO();
                cout << "-----------------------\n";
            }
        } else if (op == 3) {
            cout << "\nObrigado por usar o programa!\n";
        } else {
            cout << "\nOpcao invalida!\n";
        }

    } while (op != 3);

    return 0;
}

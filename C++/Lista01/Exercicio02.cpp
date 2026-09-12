#include <iostream>
using namespace std;

const int TURMAS = 3;
const int ALUNOS = 5;
const int NOTAS = 3;

// a) Le todas as notas de todas as turmas e alunos
void lerNotas(float notas[TURMAS][ALUNOS][NOTAS]) {
    for (int i = 0; i < TURMAS; i++) {
        for (int j = 0; j < ALUNOS; j++) {
            for (int k = 0; k < NOTAS; k++) {
                cout << "Turma " << i+1 << ", Aluno " << j+1 << ", Nota " << k+1 << ": ";
                cin >> notas[i][j][k];
            }
        }
    }
}

// b) Calcula a media de um aluno especifico
float mediaAluno(float notas[TURMAS][ALUNOS][NOTAS], int turma, int aluno) {
    float soma = 0;
    for (int k = 0; k < NOTAS; k++) {
        soma += notas[turma][aluno][k];
    }
    return soma / NOTAS;
}

// c) Calcula a media de cada turma
void mediaTurmas(float notas[TURMAS][ALUNOS][NOTAS]) {
    for (int i = 0; i < TURMAS; i++) {
        float soma = 0;
        for (int j = 0; j < ALUNOS; j++) {
            soma += mediaAluno(notas, i, j);
        }
        cout << "Media da turma " << i+1 << ": " << soma / ALUNOS << endl;
    }
}

// d) Encontra o aluno com maior media em cada turma
void maiorMediaPorTurma(float notas[TURMAS][ALUNOS][NOTAS]) {
    for (int i = 0; i < TURMAS; i++) {
        float maior = mediaAluno(notas, i, 0);
        int alunoMaior = 0;
        for (int j = 1; j < ALUNOS; j++) {
            float media = mediaAluno(notas, i, j);
            if (media > maior) {
                maior = media;
                alunoMaior = j;
            }
        }
        cout << "Turma " << i+1 << ": aluno " << alunoMaior+1 << " com media " << maior << endl;
    }
}

// e) Encontra a maior media geral entre todos os alunos
void maiorMediaGeral(float notas[TURMAS][ALUNOS][NOTAS]) {
    float maior = mediaAluno(notas, 0, 0);
    int turmaMaior = 0, alunoMaior = 0;
    for (int i = 0; i < TURMAS; i++) {
        for (int j = 0; j < ALUNOS; j++) {
            float media = mediaAluno(notas, i, j);
            if (media > maior) {
                maior = media;
                turmaMaior = i;
                alunoMaior = j;
            }
        }
    }
    cout << "Maior media geral: " << maior << " (Turma " << turmaMaior+1
         << ", Aluno " << alunoMaior+1 << ")" << endl;
}

// f) Conta quantos alunos foram aprovados (media > 7.0)
void alunosAprovados(float notas[TURMAS][ALUNOS][NOTAS]) {
    int cont = 0;
    for (int i = 0; i < TURMAS; i++) {
        for (int j = 0; j < ALUNOS; j++) {
            if (mediaAluno(notas, i, j) > 7.0) cont++;
        }
    }
    cout << "Alunos aprovados: " << cont << endl;
}

int main() {
    float notas[TURMAS][ALUNOS][NOTAS];
    char opcao;
    bool lido = false;

    do {
        cout << "\n--- MENU ---\n";
        cout << "a) Ler todas as notas\n";
        cout << "b) Media de um aluno\n";
        cout << "c) Media de cada turma\n";
        cout << "d) Aluno com maior media de cada turma\n";
        cout << "e) Maior media geral\n";
        cout << "f) Alunos aprovados\n";
        cout << "s) Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 'a':
                lerNotas(notas);
                lido = true;
                break;
            case 'b': {
                if (!lido) { cout << "Leia as notas primeiro!\n"; break; }
                int turma, aluno;
                cout << "Digite a turma (1 a " << TURMAS << "): ";
                cin >> turma;
                cout << "Digite o aluno (1 a " << ALUNOS << "): ";
                cin >> aluno;
                cout << "Media do aluno: " << mediaAluno(notas, turma-1, aluno-1) << endl;
                break;
            }
            case 'c':
                if (!lido) { cout << "Leia as notas primeiro!\n"; break; }
                mediaTurmas(notas);
                break;
            case 'd':
                if (!lido) { cout << "Leia as notas primeiro!\n"; break; }
                maiorMediaPorTurma(notas);
                break;
            case 'e':
                if (!lido) { cout << "Leia as notas primeiro!\n"; break; }
                maiorMediaGeral(notas);
                break;
            case 'f':
                if (!lido) { cout << "Leia as notas primeiro!\n"; break; }
                alunosAprovados(notas);
                break;
            case 's':
                cout << "Encerrando...\n";
                break;
            default:
                cout << "Opcao invalida!\n";
        }
    } while (opcao != 's');

    return 0;
}
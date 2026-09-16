#include <iostream> // Entrada saída de dados
#include <conio.h> // Getch()
#include <locale> // Acentuação
#include <iomanip> // Formatação
#include <string>
#include <bits/stdc++.h>
//system("cls"); -> limpar a tela
//F6 -> Para compilar o código
//F11 -> Gerar terminal

using namespace std;

struct Endereco {
    string rua;
    string num;
};

struct Aluno { //Meu tipo de dado
    string ra;
    string nome;
    float nota;
    Endereco end;
} a, b;

const int T = 1;
Aluno aluno1, aluno2, turmaBcc[T];

void imprimaAluno();

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    aluno1.ra = "2611600114";
    aluno1.nome = "Henrique";
    aluno1.nota = 10.0;

    cout << aluno1.ra << endl;
    cout << aluno1.nome << endl;
    cout << aluno1.nota << endl;

    aluno2.ra = "2611600999";
    aluno2.nome = "Outro aluno";
    aluno2.nota = 8.5;

    cout << endl;
    cout << aluno2.ra << endl;
    cout << aluno2.nome << endl;
    cout << aluno2.nota << endl;

    a.ra = "2611600680";
    a.nome = "Enzo";
    a.nota = 5.78;

    cout << endl;
    cout << a.ra << endl;
    cout << a.nome << endl;
    cout << a.nota << endl;

    b.ra = "2611600291";
    b.nome = "Gabriel";
    b.nota = 7.82;
    b.end.rua = "Rua dos Estudantes";
    b.end.num = "485";

    cout << endl;
    cout << b.ra << endl;
    cout << b.nome << endl;
    cout << b.nota << endl;
    cout << b.end.rua << endl;
    cout << b.end.num << endl;

    cout << "\n\tVetor da turma de Ciência da Computação\n";

    for (int i = 0; i < T; i++)
    {
        cout << "Informe os dados do aluno " << i + 1 << endl;

        cout << "RA: ";
        getline(cin, turmaBcc[i].ra);

        cout << "Nome: ";
        getline(cin, turmaBcc[i].nome);

        cout << "Nota: ";
        cin >> turmaBcc[i].nota;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Endereço\n";

        cout << "Nome da rua: ";
        getline(cin, turmaBcc[i].end.rua);

        cout << "Número: ";
        getline(cin, turmaBcc[i].end.num);
    }

    imprimaAluno();
	
	return 0;
}

void imprimaAluno () {
    system("cls");
    for (int i = 0; i < T; i++)
    { 
        cout << turmaBcc[i].ra << endl;
        cout << turmaBcc[i].nome << endl;
        cout << turmaBcc[i].end.rua << endl;
        cout << turmaBcc[i].end.num << endl;
        cout << endl;
    }   
}
#include <iostream> // entrada saída de dados
#include <conio.h> // getch()
#include <locale> // acentuação
#include <bits/stdc++.h>
#include "Aula12-1.cpp"
//system("cls"); -> limpar a tela
//F11 -> Gerar terminal

using namespace std;

//variáveis globais
int a, b, n;

// Protótipos de funções
int somar(int x, int y);
int trocar(int &a, int &b);
int contar(int n);

int main() {
	setlocale(LC_ALL, "Portuguese");
	cout << "Passagem de valor por Valor\n";
	cout << "Digite um valor para a: ";
	cin >> a;
	cout << "Digite um valor para b: ";
	cin >> b;
	cout << "A soma de a " << a << " + " << b << " é " << somar(a,b);
	cout << endl << endl;
	
	cout << "Passagem de parâmetro por Referência: ";
	cout << "Função troca\n";
	cout << "a = " << a << "; b = " << b;
	trocar(a,b);
	cout << "\nDepois da troca: \n";
	cout << "a = " << a << "; b = " << b;	
	
	cout << "\nFunção Recursiva\n";
	cout << "Digite um valor para n: ";
	cin >> n;
	contar(n);
	
	return 0;
}

int somar(int x, int y){ // Parâmetro por valor
	x = a;
	y = b;
	return x + y;
}

int trocar(int &a, int &b){ // Parâmetro por referência
	int temp = a; //Variável local
	a = b;
	b = temp;
}

int contar(int n){ // Função Recursiva
	if(n > 0) {
		contar(n - 1);
		cout << n << " ";
	}
}

//Conceitos:

//Procedimento x Função - Não retorna valor x Retorna valor
//Sub-rotina: Funções (rotina - if(), for(), etc.)
//Variáveis globais e locais
//Callback - função como parâmetro
//Passagem de valor - valor x referência
// Ponteiro: variável que guarda o endereço de memória de outro dado/variável, sendo possível acessar seu dado.
// - Basicamente, podemos acessar o código na qual essa variável realmente se chama na memória RAM do computador
// - Faz com que possamos mudar o valor da variável na sua memória/origem
// Prototipação - Declara a assinatura da função no início do código para que o compilador a reconheça antes de ser chamada, permitindo que o corpo da função seja escrito no final.
// Função recursiva - Uma função na qual chama a si mesma

//Conceitos para depois:
// Homologação
// Programação Orientada a Objetos (POO)
// - Classes e métodos

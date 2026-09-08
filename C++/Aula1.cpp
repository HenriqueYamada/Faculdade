#include <iostream>
#include <string> // Necessário para usar o tipo string
#include <locale>


using namespace std;

float peso1;
int idade1;
float peso2;
int idade2;
string nome;
string info;
int num, quoc, resto;

int main() {
   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//exercicio 3
	
	int A, B, C;
	cout << "Digite o lado A: ";
	cin >> A;
	cout << "Digite o lado B: ";
	cin >> B;
	cout << "Digite o lado C: ";
	cin >> C;
	
	if (A == B && A == C) {
		cout << "O triângulo é equilátero";
	} else if (A == B || A == C || B == C) {
		cout << "O triângulo é isóceles";
	} else {
		cout << "O triângulo é escaleno";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

    return 0;
}


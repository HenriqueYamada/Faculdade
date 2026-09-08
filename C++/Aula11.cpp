#include <iostream>
#include <conio.h> 
#include <locale>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

const int T = 5;
int V[T], i;

void soma(){
	float n1, n2, resultado;
	system("cls");
	
	cout << "\t\tDigite um número: ";
	cin >> n1;
	cout << "\t\tDigite outro número: ";
	cin >> n2;
	resultado = n1 + n2;
	
	cout << "\t\tA soma de " << n1 << " + " << n2 << " = " << resultado;
}

void subtracao(){
	float n1, n2, resultado;
	system("cls");
	
	cout << "\t\tDigite um número: ";
	cin >> n1;
	cout << "\t\tDigite outro número: ";
	cin >> n2;
	resultado = n1 - n2;
	
	cout << "\t\tA soma de " << n1 << " - " << n2 << " = " << resultado;
}

void divisao(){
	float n1, n2, resultado;
	system("cls");
	
	cout << "\t\tDigite um número: ";
	cin >> n1;
	cout << "\t\tDigite outro número: ";
	cin >> n2;
	resultado = (float)n1 / n2;
	
	cout << fixed << setprecision(2);
	cout << "\t\tA divisão de " << n1 << " / " << n2 << " = " << resultado;
}


void multiplicacao(){
	float n1, n2, resultado;
	system("cls");
	
	cout << "\t\tDigite um número: ";
	cin >> n1;
	cout << "\t\tDigite outro número: ";
	cin >> n2;
	resultado = n1 * n2;
	
	cout << "\t\tA soma de " << n1 << " * " << n2 << " = " << resultado;
}

void leitura(){
	system("cls");
	cout << "\t\tDigite o 1° número do vetor: ";
	cin >> V[0];
	
	for(i = 1; i < T; i++) {
		cout << "\t\tDigite o " << i+1 << "° número do vetor: ";
		cin >> V[i];
	}
	
	cout << "\n\t\tObrigado por inserir os números!";
}

void impressao(){	
	system("cls");
	for(i = 0; i < T; i++) {
		cout << "\n\t\tO " << i+1 << "° número do vetor: ";
		cout << V[i];
	}
	
	cout << "\n\n\t\tObrigado por conferir os números!";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int op = 99;
	
	while (op != 0) {
		system("cls");
		cout << "\t\tPrograma Calculadora\n";
		cout << "\t\tOPÇÕES:\n";
		cout << "\t\t\t1 - Soma\n";
		cout << "\t\t\t2 - Subtração\n";
		cout << "\t\t\t3 - Divisão\n";
		cout << "\t\t\t4 - Multiplicação\n";
		cout << "\t\t\t5 - Leitura Vetor\n";
		cout << "\t\t\t6 - Impressão do Vetor\n";
		cout << "\t\t\t0 - Sair\n";
		cout << "\t\tEscolha a opção: ";
		cin >> op;
		
		switch(op) {
			case 1:{
				soma();
				getch();
				break;
			}
			
			case 2:{
				subtracao();
				getch();
				break;
			}
			
			case 3:{
				divisao();
				getch();
				break;
			}
			
			case 4:{
				multiplicacao();
				getch();
				break;
			}
			
			case 5:{
				leitura();
				getch();
				break;
			}
			
			case 6:{
				impressao();
				getch();
				break;
			}
			
			case 0:{
				cout << "\n\t\tSaindo... Tenha um bom trabalho!\n";
				break;
			}
			
			default:{
				cout << "\t\tOpção inválida. Tente outra opção!";
				break;
			}
		}
	}
	
	
	return 0;
}

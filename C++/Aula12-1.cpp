#include <iostream> // entrada saída de dados
#include <conio.h> // getch()
#include <locale> // acentuação
#include <bits/stdc++.h>

//Aula12-1

using namespace std;

int somar(int x, int y){ // Parâmetro por valor
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

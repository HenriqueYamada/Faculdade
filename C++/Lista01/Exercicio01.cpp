#include <iostream> // entrada saída de dados
#include <conio.h> // getch()
#include <locale> // acentuação
#include <bits/stdc++.h>
//system("cls"); -> limpar a tela
//F11 -> Gerar terminal

using namespace std;

const int T = 5;
int k, qntd_k = 0;
int vetorLinha[T] = {};
int vetorColuna[T] = {};
int matriz[T][T];

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite um número para encontrarmos na matriz: ";
	cin >> k;
	
	cout << "\n";
	
	for(int i = 0; i < T; i++) {	
		for(int j = 0; j < T; j++) {
			cout << "Digite: matriz["<<i<<"]["<<j<<"]: ";
			cin >> matriz[i][j];
			
			if(matriz[i][j] == k) {
				qntd_k++;
				vetorLinha[i]++;
				vetorColuna[j]++;
			}
		}	
	}
	
	cout << "Vezes que k aparece no geral: " << qntd_k << "\n";
	
	for(int i = 0; i < T; i++) {
		cout << "\nVezes que k aparece na linha " << i + 1 << " : " << vetorLinha[i] << " e aparece na coluna " << i + 1 << " : " << vetorColuna[i];
	}
	
	cout << "\n\nPosições onde se encontra " << k << " na matriz: ";
	
	for(int i = 0; i < T; i++) {	
		for(int j = 0; j < T; j++) {
			if(matriz[i][j] == k) {
				cout << "\n\tNúmero " << k << " encontrado nas posições da matriz[" << i << "][" << j << "]";
			}
		}	
	}
	
	return 0;
}

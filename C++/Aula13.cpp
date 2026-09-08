#include <iostream>
#include <locale>
using namespace std;

const int T = 2;
int vetor[T];
int matriz[T][T];
int tridim[T][T][T];

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	cout << "VETOR: \n";
	
	// vetor
	for(int i = 0; i < T; i++) {
		cout << "Digite um número para vetor[ " << i << " ]: ";
		cin >> vetor[i];
	}
	
	cout << "\nMATRIZ: \n";	
	
	// matriz
	for(int i = 0; i < T; i++) {
		for(int j = 0; i < T; i++) {
			cout << "Digite um valor para a matriz["<<i<<"]["<<j<<"]";	
			cin >> matriz[i][j];
		}	
	}
	
	cout << "\nMATRIZ TRIDIMENSIONAL: \n";	
	
	// tridimensional
	for(int i = 0; i < T; i++) { // 1° dimensão
		for(int j = 0; j < T; j++) { // 2° dimensão
			for(int k = 0; k < T; k++) { // 3° dimensão
			cout << "Digite um valor para a matriz["<<i<<"]["<<j<<"]["<<k<<"]";	
			cin >> tridim[i][j][k];
		}
		}	
	}
	
	return 0;
}

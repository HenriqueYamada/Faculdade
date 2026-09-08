#include <iostream>
#include <conio.h>

using namespace std;
const int N = 3;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Exercicio 4
	
	/*int v[N], i, maiorPos = -1, menorPos = 99999, maior = -1, menor = 9999999999, soma = 0;
	float media;
	
	for (i = 0; i < N; i++) {
		cout << "Digite um valor: ";
		cin >> v[i];
		
		if (v[i] > maior) {
			maior = v[i];
			maiorPos = i;
		}
		
		if (v[i] < menor) {
			menor = v[i];
			menorPos = i;
		}
		
		soma += v[i];
	}
	
	media = (float)soma / N;
	
	cout << "Posição do maior número: " << maiorPos << "\n";
	cout << "Posição do menor número: " << menorPos << "\n";
	cout << "Soma do vetor: " << soma << "\n";
	cout << "Média do vetor: " << media << "\n"; */
	
	// Exercicio 5
	
	int const T = 5;
	int a[T], b[T], c[T*2];
	for (int i=0;i<T;i++){
	cout << "\Digite "<<i+1<<"º elemento do vetor A: ";
	cin >> a[i];
	}
	for (int i=0;i<T;i++){
	cout << "\Digite "<<i+1<<"º elemento do vetor B: ";
	cin >> b[i];
	}
	for (int i=0;i<T;i++){
		c[i]=a[i];
	}
	for (int i=0;i<T*2;i++){
		c[i+T]=b[i];
	}
	
	
	cout << "\n===== Impressão do vetor A =========="<< endl;
	for (int i=0;i<T;i++){
		cout << "["<<a[i]<<"]" << " ";
	}
		cout << "\n===== Impressão do vetor B =========="<< endl;
	for (int i=0;i<T;i++){
		cout << "["<<a[i]<<"]" << " ";
	}
	
	return 0;
}

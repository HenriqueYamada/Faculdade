#include <iostream> // entrada e saída
#include <locale.h> // usar acentuações

#include <bits/stdc++.h>

using namespace std;
	
int i, j;
string nome;
float somaMedia, media, somaMediaGeral, mediaGeral, maiorNota;
float nota;
const int alunos_max = 2;

int main() {
	setlocale(LC_ALL,"Portuguese"); //idioma português
	
	/*while(i < 10) {
		std::cout << "ERRO";
		i = i + 1;
	}*/
	
	/*int a = 1;
	do {
		int b = 1;
		do { 
			std::cout << a << "\n";	
			b++;
		} while(b <= 3);
		a++;
	} while(a <= 2); */
	
	/*for(i=1, i < 10, i++){
		std::cout << "\t" << i;
	}
	return = 0;*/
	
	//exercicio 1
		
	/*i = 0;
	maiorNota = -1;
	
	while(i < alunos_max) {
		cout << "Digite o seu nome: ";
		cin >> nome;
		
		j = 0;
		somaMedia = 0;
		
		while(j < 3) {
			cout << "Nota: ";
			cin >> nota;	
			somaMedia = somaMedia + nota;
			
			if(nota > maiorNota){
				maiorNota = nota;
			}
			
			j++;
		}
		
		/* TODO (eric#1#): estudar CPP 10 horas seguidas. 
		media = somaMedia / 3; //pc não roda vscode
		
		if(media > 7) {
			cout << "\nAprovado";
		} else {
			cout << "\nReprovado";
		}
		
		cout << "\nSua média é de " << media;
		
		somaMediaGeral = somaMediaGeral + media;
		
		cout << "\n";
		cout << "\n";
		
		i++;
	}
	
	mediaGeral = somaMediaGeral / alunos_max;
	cout << "\nA média geral da sala é de " << mediaGeral;
	cout << "\nMaior nota: " << maiorNota;*/
	
	int n;
	
	cin >> n;
	int soma = 0;
	soma = n;
	
	while (n > 0) {
		n = n - 1;
		soma = soma + n;
	}
	
	cout << soma;
}

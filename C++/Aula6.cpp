#include <iostream>
#include <locale>
using namespace std;

float media, porc_menor,porc_maior, maior_media = 0, menor_media = 11;
int cont_menor = 0, cont_maior = 0, resp = 0, cont = 0;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	while(resp != -1) {
		cout << "================================" << endl;
		cout << "Digite a nota do aluno: ";
		cin >> media;
		
		if(media < 0 || media > 10) {
			cout << "Você terá que digitar uma média entre 0 e 10" << endl;
		} else {
			if(media < 7){
				cont_menor = cont_menor + 1;
			} else {
				cont_maior = cont_maior + 1;
			}
			
			if(media > maior_media) {
				maior_media = media;
			}
			
			if(media < menor_media){
				menor_media = media;
			}
			
			cont = cont + 1;
		}
		
		cout << "\nDeseja continuar?";
		cout << "\n\t0 - Calcular novamente";
		cout << "\n\t-1 - Sair" << endl;
		cout << "Resposta: ";
		cin >> resp;
		
		while(resp != 0 && resp != -1) {
			cout << "================================" << endl;
			cout << "Digite uma resposta válida: ";
			cout << "\n\t0 - Calcular novamente";
			cout << "\n\t-1 - Sair" << endl;
			cout << "Resposta: ";
			cin >> resp;
		}
	}
	
	if(menor_media == 11) {
		menor_media = 0;
	}

	porc_maior = cont_maior * 100 / cont;
	porc_menor = cont_menor * 100 / cont;
	
	cout << "================================" << endl;
	cout << "\nA) Porcentagem de notas maiores ou iguais a 7.0: " << porc_maior << "%";
	cout << "\nB) Porcentagem de notas menores que 7.0: " << porc_menor << "%";
	cout << "\nC) Maior número: " << maior_media;
	cout << "\nD) Menor número: " << menor_media;
	
	return 0;
}

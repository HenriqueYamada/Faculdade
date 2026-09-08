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
   
	
	
	
	 // 1. Textos (strings) sempre entre aspas ""
    nome = "Henrique";
    info = "true"; 
    
    // 2. CPF é muito grande para 'int'. Use 'long long' ou 'string'.
    long long CPF = 23143253245;

    if (CPF == 23143253245) {
        cout << "Todas as informações estão corretas" << endl;
    } 
    // 4. 'else' não leva condição. Se quiser condição, use 'else if'.
    else if (CPF != 23143253245 && nome != "Henrique") {
        cout << "CPF e nome: AS INFORMAÇÕES ESTÃO INCORRETAS" << endl;
    }

    if (info == "true") {
        cout << "BEM VINDO(A) " << nome << " AO CACULOPI 2.0" << endl;
    }
    
     
     
	 
	 
	 
	 
	 
	 
	 
	 
	 //é par  ou impar
	 
	 setlocale(LC_ALL,"Portuguese");
	 cout << "Digite um número inteiro: ";
	 cin >> num;
	 
	 quoc = num / 2;
	 resto = num - (quoc * 2);
	 if (resto == 0) {
	 	cout << "O número " << num << " é par";
	 } else {
	 	cout << "O número " << num << " é ímpar" << endl;
	 }
	 

    //var idade peso
    cout << " roberta digite seu peso: ";
    cin >> peso1;
    cout << " roberta qual sua idade?";
    cin >> idade1;
    cout << "pedro digite seu peso: ";
    cin >> peso2;
    cout << "pedro qual sua idade?";
    cin >> idade2;
    if(idade1 < idade2){
    	cout << "pedro tem " << idade2 << " anos e é o mais velho" << endl;
	}else if(idade1 > idade2){
		cout << "roberta tem " << idade1 << " anos e é o mais velho" << endl;
	}else{
		cout << "Os dois tem a mesma idade";
	}
	
	if(peso1 < peso2){
    	cout << "pedro tem " << peso2 << "kg e é o mais pesado" << endl;
	}else if(peso1 > peso2){
		cout << "roberta tem " << peso1 << "kg e é o mais pesado" << endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
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


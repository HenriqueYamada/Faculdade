#include <iostream> // entrada e saída
#include <locale.h> // usar acentuações


#include <bits/stdc++.h>

#define PRECO 1.99
#define PI 3.14159

using namespace std;

int main() {
	int a, b, c, soma;
	a = 0;
	b = 1; 
	c = 1;
	soma = 0;
	
	for (int i = 0; i < 10; i++) {
		soma = soma + b; 
		a = b;
		b = c;
		c = a + b;
		cout << a;
	};
	
	cout << endl << "Soma: " << soma;
	
    return 0;
}

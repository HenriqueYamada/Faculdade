#include <iostream>
#include <locale>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

struct livros{
    int id;
    string isbn;
	string nome;
    string genero;
    string autor;
    float preco;
    double nota;
};

int main(){
    setlocale(LC_ALL,"Portuguese");

    return 0;
}
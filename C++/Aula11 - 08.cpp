#include <iostream>
#include <iomanip> // setw()
#include <locale>  // acentuações BR
#include <conio.h> // getch()
#include <cstdlib> // system()
#include <string>

using namespace std;

// Variáveis globais
int const T = 4;
string vCid[T] = {"Assis", "CM", "Taruma", "PP"};
bool nMapa[T][T] = {
    { 0, 1, 0, 0 },
    { 0, 0, 0, 0 },
    { 1, 0, 0, 1 },
    { 0, 0, 0, 0 }
};

void imprimir() {
    system("cls");
    cout << "Imprimir o Mapa das estradas\n\n";
    cout << setw(15) << " ";
    for(int i = 0; i < T; i++) {
        cout << setw(15) << vCid[i];
    }
    cout << endl;
    
    for(int i = 0; i < T; i++) {
        cout << setw(2) << " - " << setw(15) << vCid[i] << " | ";
        for(int j = 0; j < T; j++) {
            cout << setw(9) << nMapa[i][j];
        }
        cout << setw(2) << " | " << endl;
    }
    cout << "\nPressione qualquer tecla para continuar...";
    getch();
}

void leitura() {
    system("cls");
    cout << "Leitura das Cidades\n\n";
    for(int i = 0; i < T; i++) {
        cout << "Informe o nome da " << i + 1 << "ª cidade: ";
        cin >> ws; // Limpa espaços e buffers pendentes antes do getline
        getline(cin, vCid[i]);
    }
    for(int i = 0; i < T; i++) {
        for(int j = 0; j < T; j++) {
//            cout << "Exite estrada de " << vCid[i] << " para " << vCid[j] << " (0 = Não | 1 = Sim): ";
//            cin >> nMapa[i][j];
			  nMapa[i][j]
        }
        cout << setw(2) << " | " << endl;
    }
}

int main() {
    setlocale(LC_ALL, "");
    int op = 99;
    
    while(op != 0) {
        system("cls");
        cout << "Gerenciamento de Estradas\n";
        cout << "\t1 - Imprimir Mapa\n";
        cout << "\t2 - Leitura\n";
        cout << "\t0 - Sair\n";
        
        cout << "\nEscolha uma opção: ";
        cin >> op;
        
        switch(op) {
            case 0:
                cout << "Saindo...\n";
                getch();
                break;
                
            case 1:
                imprimir();
                break;
                
            case 2:
                leitura();
                break;
                
            default:
                cout << "Opção inválida!\n";
                getch();
                break;
        }
    }
    
    return 0;
}

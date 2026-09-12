#include <iostream>
using namespace std;

const int DIM1 = 2;
const int DIM2 = 3;
const int DIM3 = 4;

// a) Le todos os elementos da matriz
void lerMatriz(int matriz[DIM1][DIM2][DIM3]) {
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                cout << "Elemento [" << i << "][" << j << "][" << k << "]: ";
                cin >> matriz[i][j][k];
            }
        }
    }
}

// b) Exibe todos os elementos da matriz
void exibirMatriz(int matriz[DIM1][DIM2][DIM3]) {
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                cout << "matriz[" << i << "][" << j << "][" << k << "] = " << matriz[i][j][k] << endl;
            }
        }
    }
}

// c) Calcula a soma de todos os elementos
int somaElementos(int matriz[DIM1][DIM2][DIM3]) {
    int soma = 0;
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                soma += matriz[i][j][k];
            }
        }
    }
    return soma;
}

// d) Encontra o maior elemento
int maiorElemento(int matriz[DIM1][DIM2][DIM3]) {
    int maior = matriz[0][0][0];
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                if (matriz[i][j][k] > maior) maior = matriz[i][j][k];
            }
        }
    }
    return maior;
}

// e) Encontra o menor elemento
int menorElemento(int matriz[DIM1][DIM2][DIM3]) {
    int menor = matriz[0][0][0];
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                if (matriz[i][j][k] < menor) menor = matriz[i][j][k];
            }
        }
    }
    return menor;
}

// f) Conta quantos elementos sao pares
int contarPares(int matriz[DIM1][DIM2][DIM3]) {
    int cont = 0;
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                if (matriz[i][j][k] % 2 == 0) cont++;
            }
        }
    }
    return cont;
}

// g) Conta quantos elementos sao impares
int contarImpares(int matriz[DIM1][DIM2][DIM3]) {
    int cont = 0;
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                if (matriz[i][j][k] % 2 != 0) cont++;
            }
        }
    }
    return cont;
}

int main() {
    int matriz[DIM1][DIM2][DIM3];
    char opcao;
    bool lido = false;

    do {
        cout << "\n--- MENU ---\n";
        cout << "a) Ler todos os elementos\n";
        cout << "b) Exibir todos os elementos\n";
        cout << "c) Soma de todos os elementos\n";
        cout << "d) Maior elemento\n";
        cout << "e) Menor elemento\n";
        cout << "f) Quantidade de elementos pares\n";
        cout << "g) Quantidade de elementos impares\n";
        cout << "s) Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 'a':
                lerMatriz(matriz);
                lido = true;
                break;
            case 'b':
                if (!lido) { cout << "Leia a matriz primeiro!\n"; break; }
                exibirMatriz(matriz);
                break;
            case 'c':
                if (!lido) { cout << "Leia a matriz primeiro!\n"; break; }
                cout << "Soma: " << somaElementos(matriz) << endl;
                break;
            case 'd':
                if (!lido) { cout << "Leia a matriz primeiro!\n"; break; }
                cout << "Maior elemento: " << maiorElemento(matriz) << endl;
                break;
            case 'e':
                if (!lido) { cout << "Leia a matriz primeiro!\n"; break; }
                cout << "Menor elemento: " << menorElemento(matriz) << endl;
                break;
            case 'f':
                if (!lido) { cout << "Leia a matriz primeiro!\n"; break; }
                cout << "Elementos pares: " << contarPares(matriz) << endl;
                break;
            case 'g':
                if (!lido) { cout << "Leia a matriz primeiro!\n"; break; }
                cout << "Elementos impares: " << contarImpares(matriz) << endl;
                break;
            case 's':
                cout << "Encerrando...\n";
                break;
            default:
                cout << "Opcao invalida!\n";
        }
    } while (opcao != 's');

    return 0;
}
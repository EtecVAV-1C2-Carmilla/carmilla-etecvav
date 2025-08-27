#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    char opcao;

    do {
        cout << "Digite uma palavra: ";
        cin >> palavra;

        int inicio = 0;
        int fim = palavra.length() - 1;
        bool palindromo = true;

        while (inicio < fim) {
            if (palavra[inicio] != palavra[fim]) {
                palindromo = false;
                break;
            }
            inicio++;
            fim--;
        }

        if (palindromo)
            cout << palavra << " e um palindromo!" << endl;
        else
            cout << palavra << " nao e um palindromo!" << endl;

        cout << "Deseja continuar? (s/n): ";
        cin >> opcao;

    } while (opcao == 's' || opcao == 'S');

    cout << "Programa encerrado." << endl;
    return 0;
}

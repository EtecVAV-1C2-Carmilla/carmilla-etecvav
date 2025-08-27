#include <iostream>
using namespace std;

string diaDaSemana(int num) {
    int resto = ((num % 7) + 7) % 7;

    switch(resto) {
        case 0: return "Domingo";
        case 1: return "Segunda-feira";
        case 2: return "Terca-feira";
        case 3: return "Quarta-feira";
        case 4: return "Quinta-feira";
        case 5: return "Sexta-feira";
        case 6: return "Sabado";
        default: return "Erro"; 
    }
}

int main() {
    int num;
    char opcao;

    do {
        cout << "Digite um numero inteiro: ";
        cin >> num;

        cout << "Dia da semana: " << diaDaSemana(num) << endl;

        cout << "Deseja continuar (s/n)? ";
        cin >> opcao;

    } while(opcao == 's' || opcao == 'S');

    cout << "Programa encerrado." << endl;

    return 0;
}

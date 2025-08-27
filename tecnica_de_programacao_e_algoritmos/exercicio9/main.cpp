#include <iostream>
using namespace std;

// substitui vogais por '*'
char* substituir(char palavra[]) {
    int i = 0;
    while (palavra[i] != '\0') {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' ||
            palavra[i] == 'o' || palavra[i] == 'u') {
            palavra[i] = '*';
        }
        i++;
    }
    return palavra;//vai para a condicao palavra ou cadeia palavra
}

int main() {
    char palavra[50];//coloca um limite de letras 
    char continuar;//coloca uma condicao se quer continuar ou nao 

    do {
        cout << "Digite uma palavra: ";
        cin >> palavra;

        int i = 0;
        int errado = 0;

        // Verifica se a palavra tem aletra ou nao 
        while (palavra[i] != '\0') {
            if (!((palavra[i] >= 'a' && palavra[i] <= 'z'))){
                errado = 1;

            }
            i++;
        }
         //se tiver numero ele ecreve isso
        if (errado == 1) {
            cout << "Digite apenas letras." << endl;
        } else {
            cout << "A palavra ficou assim: " << substituir(palavra) << endl; //aqui ele coloca o resultado
        }

        cout << "quer continuar? (s/n): ";//se atender as condicoes ele continua se nao ele termina o codigo
        cin >> continuar;

    } while (continuar == 's' );


    return 0;
}

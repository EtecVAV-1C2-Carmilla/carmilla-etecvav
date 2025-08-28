# include <iostream>
using namespace std;

int main() {
    char repetir;

    do {
        char ordem;
        int n1, n2, n3, n4, n5;

        cout << "Esse programa ira ler 5 numeros." << endl;
        cout << "Em qual ordem voce deseja que os numeros sejam organizados?" << endl;
        cout << "('C' para crescente, 'D' para decrescente e 'N' para nao ordenado): ";
        cin >> ordem;

        cout << "Digite o 1º numero: ";
        cin >> n1;
        cout << "Digite o 2º numero: ";
        cin >> n2;
        cout << "Digite o 3º numero: ";
        cin >> n3;
        cout << "Digite o 4º numero: ";
        cin >> n4;
        cout << "Digite o 5º numero: ";
        cin >> n5;

        
        if (ordem == 'C' || ordem == 'c') {
            if (n1 > n2) swap(n1, n2);
            if (n2 > n3) swap(n2, n3);
            if (n3 > n4) swap(n3, n4);
            if (n4 > n5) swap(n4, n5);
            if (n1 > n2) swap(n1, n2);
            if (n2 > n3) swap(n2, n3);
            if (n3 > n4) swap(n3, n4);
            if (n1 > n2) swap(n1, n2);
            if (n2 > n3) swap(n2, n3);
            if (n1 > n2) swap(n1, n2);
        }
        
        else if (ordem == 'D' || ordem == 'd') {
            if (n1 < n2) swap(n1, n2);
            if (n2 < n3) swap(n2, n3);
            if (n3 < n4) swap(n3, n4);
            if (n4 < n5) swap(n4, n5);
            if (n1 < n2) swap(n1, n2);
            if (n2 < n3) swap(n2, n3);
            if (n3 < n4) swap(n3, n4);
            if (n1 < n2) swap(n1, n2);
            if (n2 < n3) swap(n2, n3);
            if (n1 < n2) swap(n1, n2);
        }
       

        cout << "A ordem feita e a seguinte: "
             << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << endl;

        cout << "Deseja fazer novamente? (S/N): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's');

    cout << "Programa finalizado!" << endl;
    return 0;
}

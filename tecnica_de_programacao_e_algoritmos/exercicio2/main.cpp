#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int potencia(int base, int expo){
	int resultado = 1;
	int i = 1;
	while(i <= expo){
		resultado = base * resultado;
		i = i + 1;
	}
	return resultado;
}
	int main(int argc, char** argv) {
		 int base, expo;
		 char r;
		 r = 's';
		 while(r == 's' || r == 'S'){
		 std::cout << "digite uma base: ";
		 std::cin >> base;
		 std::cout << "Digite o expoente: ";
	     std::cin >> expo;
	     int resultado = potencia(base, expo);
	     std::cout << base << " elevado a " << expo << " e: " << resultado;
	     std::cout << "\ndeseja continuar s/n? ";
	     std::cin >> r;
	 	}
		return 0;
	}

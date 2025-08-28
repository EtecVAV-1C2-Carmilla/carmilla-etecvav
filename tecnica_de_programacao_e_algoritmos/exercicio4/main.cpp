#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int soma(int x, int y){
	int z = 0;
	z = x + y;
}
int subtracao(int x, int y){
	int z = 0;
	z = x - y;
}
int mult(int x, int y){
	int z = 0;
	z = x * y;
}
int div(int x, int y){
	float z = 0;
	z = x / y;
}
int main(int argc, char** argv) {
	int x, y;
	float resultado;
	char r;
	r = 's';
	while(r == 's' || r == 'S'){
		std::cout << "qual seu primeiro numero? ";
		std::cin >> x;
		std::cout << "qual seu segundo numero? ";
		std::cin >> y;
		resultado = soma(x, y);
		std::cout << x << " + " << y << " = " << resultado;
		resultado = subtracao(x, y);
		std::cout << "\n" << x << " - " << y << " = " << resultado;
		resultado = mult(x, y);
		std::cout << "\n" << x << " X " << y << " = " << resultado;
		resultado = div(x, y);
		std::cout << "\n" << x << " : " << y << " = " << resultado;
		std::cout << "\n deseja continuar s/n? ";
		std::cin >> r; 
	}
	return 0;
}

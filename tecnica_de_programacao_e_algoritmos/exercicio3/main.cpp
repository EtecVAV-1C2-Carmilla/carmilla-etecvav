#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float h, pi;
	char r, g;
	r ='s';
	while(r =='s' || r == 'S'){
		std::cout<<"informe seu genero(M/F) ";
		std::cin>>g;
		std::cout<<"informe sua altura ";
		std::cin>>h;
			if(g == 'M' || g == 'm'){
				pi = 72.7 * h - 58;
			}else{
				pi = 62.1 * h - 44.7;
			}
		std::cout<<"o peso ideal e "<<pi;
		std::cout<<"\ndeseja continuar(s/n)? ";
		std::cin>>r;
	}
	return 0;
}

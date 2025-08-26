#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num, num1, v, c;
	char l, r;
	r = 's';
	while(r == 's' || r == 'S'){
		 num = 0;
		 std::cout<<"quantas letras tem seu nome? ";
		 std::cin>>num;
		 num1 = 1;
		 c = 0;
		 v = 0;
			while(num1 <= num){
			std::cout<<"escreva a "<< num1 <<" dos seu nome ";
			std::cin>>l;
			num1 = num1 + 1;
			if(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U' ){
				v = v + 1;
			}else{
				c = c + 1;
			}
	}
	std::cout<<"seu nome tem "<< v << " vogais e "<< c << " consoantes ";
	std::cout<<"\nDeseja continuar (s/n)? ";
	std::cin>>r;
}
	return 0;
}

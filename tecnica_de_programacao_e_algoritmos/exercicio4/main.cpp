#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a, b, c;
	char r;
	r = 's';
		while(r == 's' || r == 'S'){
			std:: cout<<"qual o primeiro monomio dos seus calculos? ";
			std:: cin>>a;
			std:: cout<<"qual o segundo monomio dos seus calculos? ";
			std:: cin>>b;
			c = a + b;
			std:: cout<< a<< " + "<< b<< " = "<< c<<"\n";
			c = a - b;
			std:: cout<< a<< " - "<< b<< " = "<< c<<"\n";
			c = a * b;
			std:: cout<< a<< " x "<< b<< " = "<< c<<"\n";
			c = a / b;
			std:: cout<< a<< " / "<< b<< " = "<< c<<"\n";
			std:: cout<<"deseja continuar s/n? ";
			std:: cin>>r;
		}
	return 0;
}

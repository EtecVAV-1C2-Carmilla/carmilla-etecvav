#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int b1, b2, p, i;
char r;
r = 's';
while(r == 's' || r == 'S'){
std::cout<<"qual a base da sua potenciacao? ";
std::cin>>b1;
std::cout<<"qual a potencia da sua potenciacao? ";
std::cin>>p;
int b2 = 1;
int i = 1;
while(i <= p){
b2 = b2 * b1;
i = i + 1;
}
std::cout<<"sua potenciacao e igual a "<<b2;
std::cout<<"\ndeseja continuar s/n? ";
std::cin>>r;
}
return 0;
}

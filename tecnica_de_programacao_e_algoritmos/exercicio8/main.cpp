#include <iostream>
#include <iomanip>
 
float area(float re) {
    return re * re * 3.14f; // retorna o valor
}
 
int main() {
    float re, r1, r2, r3, r4, r5;
    char r = 's';
 
    while (r == 's' || r == 'S') {
        std::cout << "qual o raio do circulo 1? ";
        std::cin >> re;
        r1 = area(re);
 
        std::cout << "\nqual o raio do circulo 2? ";
        std::cin >> re;
        r2 = area(re);
 
        std::cout << "\nqual o raio do circulo 3? ";
        std::cin >> re;
        r3 = area(re);
 
        std::cout << "\nqual o raio do circulo 4? ";
        std::cin >> re;
        r4 = area(re);
 
        std::cout << "\nqual o raio do circulo 5? ";
        std::cin >> re;
        r5 = area(re);
 
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nas areas dos circulos sao respectivamente: "
<< r1 << ", " << r2 << ", " << r3 << ", " << r4 << ", " << r5 << '\n';
 
        std::cout << "\nDeseja repetir? (s/S para sim): ";
        std::cin >> r;
        std::cout << '\n';
    }
 
    return 0;
}

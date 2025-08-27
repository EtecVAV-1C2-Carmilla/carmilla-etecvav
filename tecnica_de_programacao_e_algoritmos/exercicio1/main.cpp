#include <iostream>

bool impares(int n) {
    return n % 2 != 0;
}

int main(int argc, char** argv) {
    int a, n, i;
    char r;
    r = 's';
    
    while (r == 's' || r == 'S') {
        i = 0;
        std::cout << "digite um numero ";
        std::cin >> a;
        
        n = 1;
        while (n <= a) {
            i = n + i;
            n = n + 2;
        }
        
        std::cout << "a soma e igual " << i;
        
        if (impares(n)) {
            i = i + 1; 
        }
        
        std::cout << "\ndeseja continuar s/n? ";
        std::cin >> r;
    }
    
    return 0;
}

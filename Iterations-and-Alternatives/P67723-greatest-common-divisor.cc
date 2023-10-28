#include <iostream>

// Función para calcular el MCD usando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int numero1, numero2;

    std::cin >> numero1;
    std::cin >> numero2;

    // Calcular el MCD de los dos números
    int mcd = calcularMCD(numero1, numero2);

    std::cout << "The gcd of " << numero1 << " and " << numero2 << " is " << mcd << "." <<  std::endl;

    return 0;
}

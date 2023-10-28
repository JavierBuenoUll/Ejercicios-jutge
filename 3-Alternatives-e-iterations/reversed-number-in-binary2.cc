#include <iostream>

int main() {
    // Leer el número de entrada
    unsigned int number;
    std::cout << "Ingresa un número natural: ";
    std::cin >> number;

    // Asegurarse de que el número no sea cero
    if (number == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }

    // Inicializar una variable para almacenar la representación binaria invertida
    int reversed_binary = 0;

    // Calcular la representación binaria invertida
    while (number > 0) {
        reversed_binary = (reversed_binary << 1) | (number & 1);
        number >>= 1;
    }

    // Imprimir la representación binaria invertida sin ceros a la izquierda
    bool print_started = false;
    while (reversed_binary > 0) {
        if (reversed_binary & 1) {
            print_started = true;
        }
        if (print_started) {
            std::cout << (reversed_binary & 1);
        }
        reversed_binary >>= 1;
    }

    std::cout << std::endl;

    return 0;
}

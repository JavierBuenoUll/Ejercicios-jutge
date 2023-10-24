/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file reersed-numbers.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program prints the reversed number of the introduced one. 
  * @bug There are no known bugs
  */
#include <iostream>
#include <string>

int main() {
    // Leer el número de entrada
    int number;
    std::cout << "Ingresa un número: ";
    std::cin >> number;

    // Convertir el número en una cadena con los ceros a la izquierda
    std::string reversedNumber = std::to_string(number);

    // Imprimir el inverso con los ceros a la izquierda
    for (int i = reversedNumber.length() - 1; i >= 0; i--) {
        std::cout << reversedNumber[i];
    }

    std::cout << std::endl;

    return 0;
}

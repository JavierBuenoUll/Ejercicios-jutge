/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 7/11/2023
  * @brief El programa consiste en imprimir el máximo común divisor de x números.
  * @bug There are no known bugs
  */

#include <iostream>

int calcularMCD(int numero_1, int numero_2) {
  while (numero_2 != 0) {
    int temp = numero_2;
    numero_2 = numero_1 % numero_2;
    numero_1 = temp;
  }
  return numero_1;
}

int main() {
  int numero_1, numero_2;
  while(std::cin >> numero_1 >> numero_2) {
    int greatest_common_divisor = calcularMCD(numero_1, numero_2);
    std::cout << "gcd(" << numero_1 << "," << numero_2 << ")→" << greatest_common_divisor <<  std::endl;
  }
  return 0;
}

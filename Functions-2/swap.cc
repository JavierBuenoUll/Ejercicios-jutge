/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 9/11/2023
  * @brief El programa consiste en intercambiar el valor de dos variables enteras introducidas.
  * @bug There are no known bugs
  */

#include <iostream>

void swap2(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
  std::cout << a << " " << b;
}

int main (int argc, char* argv[]) {
  int numero_a;
  int numero_b;
  while (std::cin >> numero_a >> numero_b) {
    std::cout << "swap2(" << numero_a << "," << numero_b << ")→"; 
    swap2(numero_a, numero_b);
    std::cout << std::endl;
  }
  return 0;
}

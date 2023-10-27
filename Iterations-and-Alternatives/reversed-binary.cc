/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal-to-binary.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 26/10/2023
  * @brief El programa consiste en imprimir "Hello World" en la pantalla.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

int main() {

  int numero_decimal;

  std::cin >> numero_decimal;
 
  if (numero_decimal == 0) {
    std::cout << "0";
  }
  std::string binary;
  while (numero_decimal > 0) {
    binary += (numero_decimal % 2 == 0) ? '0' : '1';
    numero_decimal /= 2;
  }
  std::cout << binary << std::endl;

  return 0;
}

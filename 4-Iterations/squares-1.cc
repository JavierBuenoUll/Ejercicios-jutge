/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file squares.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/10/2023
  * @brief This programs reads a number and prints like a matrix of numberxnumber.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  int numero;
  while (std::cin >> numero) {
    if (numero <= 0 || numero >= 10) {
      std::cout << std::endl;
    }
    for (int i = 0; i < numero; i++) {
      for (int j = 0; j < numero; j++) {
        std::cout << numero;
      } 
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }

  return 0;
}

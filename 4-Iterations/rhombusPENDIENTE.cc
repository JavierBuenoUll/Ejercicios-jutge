/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file triangle.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/10/2023
  * @brief This programs reads a number and prints a triangle with x lines.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

int main() {
  int numero;
  std::cin >> numero;
  std::string asterisco = "*";
    if (numero == 0) {
      return 1;
     }
    for (int i = 0; i < numero; i++) {
      std::cout << asterisco << std::endl;
      asterisco = "*" + asterisco;
    } 

  return 0;
}

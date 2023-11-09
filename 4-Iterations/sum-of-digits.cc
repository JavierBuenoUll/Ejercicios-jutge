/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum-of-digits.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/10/2023
  * @brief This programs reads a number and sums up all of its numbers. 
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>
int main() {
  int numero;
  while (std::cin >> numero) {
  const int  kNumero_Inicial = numero;
  int suma = 0;
    while (numero > 0) {
      suma += numero % 10;
      numero /= 10;
    }
    std::cout << std::fixed << std::setprecision(0) << "The sum of the digits of " << kNumero_Inicial << " is ";
    std::cout << suma << "." << std::endl;
  }
  return 0;
}

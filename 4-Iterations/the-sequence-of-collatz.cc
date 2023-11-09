/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file the-sequence-of-collatz.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/10/2023
  * @brief This programs reads a number and operate with it depending if it is even or odd until it reaches to 0.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  int numero;
  while (std::cin >> numero) {
    int suma_pasos = 0;
    while (numero !=1) {
      if (numero % 2 != 0) {
        numero = numero * 3 + 1;
        suma_pasos++;
      }
      if (numero % 2 == 0) {
        numero = numero / 2;
        suma_pasos++;
      }
    }
  std::cout << suma_pasos << std::endl;
}
  return 0;
}

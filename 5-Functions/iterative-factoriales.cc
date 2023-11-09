/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file hola.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 5/11/2023
  * @brief El programa consiste en imprimir el factorial de x número.
  * @bug There are no known bugs
  */
#include <iostream>
#include <cmath>
int factorial(int numero) {
  int numero_factorial = 1; 
  for (int i = 1; i <= numero; i++) {
  numero_factorial = numero_factorial * i;
  }
  return numero_factorial;
}
int main(int argc, char* argv[]) {
  int numero;
  while (std::cin >> numero) {
    if (numero < 0 || numero> 12) {
      return 1;
    }
    int numero_factorial = factorial(numero);
    std::cout << "factorial(" << numero << ")→" << numero_factorial << std::endl;
  }
  return 0;
}

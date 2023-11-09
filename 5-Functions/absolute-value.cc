/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file absolute-value.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 03/11/2023
  * @brief This programs reads a number and prints its absolute value.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>
int ValorAbsoluto(int numero) {
  int absoluto = 0;
  if (numero >= 0) {
    absoluto = numero; 
  } else {
    absoluto = numero - (2 * numero);
  } 
  return absoluto;
}
int main() {
  int numero;
  std::cin >> numero;
  int valor_absoluto = ValorAbsoluto(numero);
  std::cout << "absolute(" << numero << ")="<< valor_absoluto << std::endl;  
  return 0;
}

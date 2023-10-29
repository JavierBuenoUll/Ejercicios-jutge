/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file product-of-digits.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/10/2023
  * @brief This programs reads a number and multiplies all its digits until there is only just one digit.
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>
int main() {
  int numero;
  while (std::cin >> numero) {
    if (numero < 10) {
      std::cout << std::fixed << std::setprecision(0) << "The product of the digits of " << numero << " is ";
      std::cout << numero << "." << std::endl;
     }
    while (numero >= 10) {
      const int  kNumero_Inicial = numero;
      int producto = 1;
      while (numero != 0) {
        producto *= numero % 10;
        numero = numero / 10;
      } 
        std::cout << std::fixed << std::setprecision(0) << "The product of the digits of " << kNumero_Inicial << " is ";
        std::cout << producto << "." << std::endl;
        numero = producto;
    }
  std::cout << "----------" << std::endl;
    } 
  return 0;
}

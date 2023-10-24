/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file comparison-of-words.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 24/10/2023
  * @brief This program prints two words sequenced according to their lexicographic order.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

int main() {

  std::string palabra1;
  std::string palabra2;

  std::cin >> palabra1;
  std::cin >> palabra2;
  
  if (palabra1 < palabra2) {
    std::cout << palabra1 << " < " << palabra2 << std::endl;
  }
  if (palabra2 < palabra1) {
    std::cout << palabra1 << " > " << palabra2 << std::endl; 
  }
  if (palabra1 == palabra2) {
    std::cout << palabra1 << " = " << palabra2 << std::endl; 
  }  

  return 0;
}

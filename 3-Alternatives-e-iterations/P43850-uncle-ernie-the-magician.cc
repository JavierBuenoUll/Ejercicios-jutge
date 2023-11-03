/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file uncle-ernie-the-magician.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 3/11/2023
  * @brief This program prints will figure out the number you were thinking since the beginning. 
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  long long int numero_final;
  while (std::cin >> numero_final) {
    numero_final /= 5;
    numero_final -= 9;
    numero_final /= 4;
    numero_final -= 6;
    numero_final /= 5;
  std::cout << numero_final << std::endl; 
  }
  return(0);
}

/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file logarithms.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/10/2023
  * @brief This programs takes two number, making the first the base and the second one the argument of the logarithm.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  long int base;
  long int argumento;
  while (std::cin >> base >> argumento) {
    std::cout << std::fixed << std::setprecision(0) <<  std::log(argumento) / std::log(base) << std::endl;
}
  return 0;
}

/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file powers.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/10/2023
  * @brief This programs takes two number, making the first one to be powered by the second one.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  long long base;
  long long exponente;
  while (std::cin >> base >> exponente) {
  if (exponente == 0) {
    std::cout << 1 << std::endl;
  } else {
    std::cout << std::fixed << std::setprecision(0) <<  std::pow(base,exponente) << std::endl;
  }
}
  return 0;
}

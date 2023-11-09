/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 9/11/2023
  * @brief El programa consiste en intercambiar el valor de dos variables enteras introducidas.
  * @bug There are no known bugs
  */

#include <iostream>

void min_max(int a, int b, int& mn, int& mx) {
  mn = std::min(a, b);
  mx = std::max(a, b);
//  std::cout << mn << " " << mx << std::endl;
}
  
/** int main (int argc, char* argv[]) {
  int numero_a;
  int numero_b;
  while (std::cin >> numero_a >> numero_b) {
    int min = 0;
    int max = 0;
    min_max(numero_a, numero_b, min, max);
  }
  return 0;
}

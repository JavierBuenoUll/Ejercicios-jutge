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
  
void cross(int n, char c) {
  for (int i = 0; i < (n - 1) / 2; ++i) {
    for (int j = 0; j < (n - 1) / 2; ++j) 
    std::cout << " ";
    std::cout << c << std::endl;
  }
  for (int j{0}; j < n; ++j)
    std::cout << c;
    std::cout << std::endl;
  for (int i = 0; i < (n - 1) / 2; ++i) {
    for (int j = 0; j < (n - 1) / 2; ++j) 
    std::cout << " ";
    std::cout << c << std::endl;
  }
}

int main (int argc, char* argv[]) {
  int numero_lineas;
  char caracter;
  while (std::cin >> numero_lineas, caracter) {
    cross(numero_lineas, caracter);
  }
  return 0;
}

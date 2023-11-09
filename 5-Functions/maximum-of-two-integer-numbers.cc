/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file maximum-of-two-integer-numbers.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 04/11/2023
  * @brief This programs reads two numbers and prints the biggest number.
  * @bug There are no known bugs
  */

#include <iostream>


int max2(int num1, int num2) {
  int maximo = std::max(num1, num2);
  return maximo;
} 
int main(int argc, char* argv[]) {
  int num1;
  int num2;
  while (std::cin >> num1 >> num2) {
  int maximo = max2(num1, num2);
  std::cout << "max2(" << num1 << "," << num2 << ")→" << maximo << std::endl;
  }
  return 0;
}

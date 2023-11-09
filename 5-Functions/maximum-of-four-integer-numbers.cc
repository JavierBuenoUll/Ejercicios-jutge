/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file maximum-of-four-integer-numbers.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 04/11/2023
  * @brief This programs reads four numbers and prints the biggest number.
  * @bug There are no known bugs
  */

#include <iostream>


int max4(int num1, int num2, int num3, int num4) {
  int maximo1 = std::max(num1, num2);
  int maximo2 = std::max(maximo1, num3);
  int maximo3 = std::max(maximo2, num4);
  return maximo3;
} 
int main(int argc, char* argv[]) {
  int num1;
  int num2;
  int num3;
  int num4;
  while (std::cin >> num1 >> num2 >> num3 >> num4) {
  int maximo = max4(num1, num2, num3, num4);
  std::cout << "max4(" << num1 << "," << num2 << "," << num3 << "," << num4 <<
               ")→" << maximo << std::endl;
  }
  return 0;
}

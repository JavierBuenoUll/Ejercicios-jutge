/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file maximum-of-two-integer-numbers.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief El programa consiste en una vez dados dos números, que se imprima el mayor de estos. 
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  int num1;
  int num2;
  int num3;

  std::cin >> num1;
  std::cin >> num2;
  std::cin >> num3;

  if (num1 >= num2 && num1 > num3) {
  std::cout << num1 << '\n';
}

  if (num2 > num1 && num2 >= num3) {
  std::cout << num2 << '\n';
}

  if (num3 >= num1 && num3 > num2) {
  std::cout << num3 << '\n';
}

  if (num1 == num2 && num1 == num3 && num2 == num3) {
  std::cout << num1 << '\n';
}

return 0;
}

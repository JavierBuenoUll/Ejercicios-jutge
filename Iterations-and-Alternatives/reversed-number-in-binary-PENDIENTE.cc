/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file reversed-number-in-binary.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program prints the reversed number of the introduced one in binary. 
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

int main() {

  int First_num{};
  int Inverso{0};

  std::cin >> First_num;

  if (First_num == 0) {
    std::cout << First_num << std::endl;
  }

  std::string binary;
  while (First_num > 0) {
    binary += (First_num % 2 == 0) ? '0' : '1';
    First_num /= 2;
  }
  for (int i = binary.length() - 1; i >= 0; i--) {
    std::cout << binary[i];
  }
  std::cout << std::endl;

  return(0);
}

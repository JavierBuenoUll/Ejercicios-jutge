/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file intervals1.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 24/10/2023
  * @brief This program prints the intersection between 2 intervals. 
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  int first_num_a;
  std::cin >> first_num_a;
  int second_num_a;
  std::cin >> second_num_a;
  int first_num_b;
  std::cin >> first_num_b;
  int second_num_b;
  std::cin >> second_num_b;

  int beginning = std::max(first_num_a, first_num_b);
  int end = std::min(second_num_a, second_num_b);

  if (beginning > end) {
    std::cout << "[]" << std::endl;
  } else {
      std::cout << "[" << beginning << "," << end << "]" << std::endl;
    }
  return 0;
}

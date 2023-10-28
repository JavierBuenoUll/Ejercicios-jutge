/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file multiplication-table.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program shows the multiplication table of a number.
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
 
  int num1;
  int& num2 = num1; 
  std::cin >> num1;
  
  for (int i = 1; i <= 10; ++i) {
    std::cout << num2 << "*" << i << " = " << i*num1 << std::endl;
  }

return 0;
} 



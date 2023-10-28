/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file numbers-in-an-interval.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program shows the numbers between "a" number and "b" number.
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
 
  int num1; 
  int num2;
 
  std::cin >> num1;
  std::cin >> num2;

  
  for (int i = num1; i <=num2; ++i) {
    std::cout << i;
  if (i < num2) {
    std::cout << ",";
  }
}
  std::cout << std::endl;

return 0;
} 



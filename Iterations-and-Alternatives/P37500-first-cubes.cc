/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file first-numbers.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program shows the numbers between 0 and the number introduced by the user. 
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
 
  int num1; 
 
  std::cin >> num1;
  
  for (int i = 0; i <=num1; ++i) {
    std::cout << i << std::endl;
  }

return 0;

} 



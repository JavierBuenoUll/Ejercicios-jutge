/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file greatest-common-divider.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program shows the greatest common divider between two numbers.
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
 
  int num1;
  std::cin >> num1; 
  int num2; 
  std::cin >> num2;
  
  int greatest_common_divider = 1;
  for (int i = 1; i <= num1 && i <= num2; i++) {
    if (num1 % i == 0 && num2 % i == 0) {
      greatest_common_divider = i;
    }
  }
  std::cout << "The gcd of " << num1 << " and " << num2 << " is " <<  greatest_common_divider << "." << std::endl;

return 0;
} 



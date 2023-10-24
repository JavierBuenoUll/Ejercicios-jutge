/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file first-cubes.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program shows the cubes before the cube of the number introduced.
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
 
  int num1;
  std::cin >> num1; 
 
  for (int i = 0; i <= num1; ++i) {
    std::cout << i*i*i;
  if (i < num1) {
    std::cout << ",";
}
  }
  std::cout << std::endl;

return 0;
} 



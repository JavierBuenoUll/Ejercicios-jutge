/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file top-to-bottom.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program shows which numbers are there betwwen 2 integers numbers previously introduced. 
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
 
  int num1; 
  int num2;
  int inicio;
  int fin; 
 
  std::cin >> num1;
  std::cin >> num2;

  if (num1 > num2) {
    inicio = num1;
    fin = num2;
  } else {
    inicio = num2;
    fin = num1;
  }
  
  for (int i = inicio; i >= fin; i--) {
    std::cout << i << std::endl;
  }

return 0;

} 



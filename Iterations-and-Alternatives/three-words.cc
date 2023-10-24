/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file three-words.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program prints the reverse order of three words, or strings.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

int main () {
 
  std::string palabra1;
  std::string palabra2;
  std::string palabra3;
 
  std::cin >> palabra1;
  std::cin >> palabra2;
  std::cin >> palabra3;

  std::cout << palabra3 << " " << palabra2 << " " << palabra1 << std::endl;
  
return 0;
} 



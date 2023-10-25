/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file counting-as.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 25/10/2023
  * @brief This program prints the number the letter "a" has been introduced.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

int main() {

  std::string frase;
  getline(std::cin, frase); 
  int suma_a;

  for (char character : frase) {
    if (character == 97) {
      suma_a++;
    }
  }
  
    std::cout << suma_a << std::endl;

  return(0);
}

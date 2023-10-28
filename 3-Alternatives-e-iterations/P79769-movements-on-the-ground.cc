/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file movements-on-the-ground.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 28/10/2023
  * @brief This program shows a specific coordinate depending on what you've introduced, east, west, north or south.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

int main () {
  int componente_a1{0};
  int componente_a2{0};
  
  std::string frase;
  getline(std::cin, frase); 

  for (char character : frase) {
    if (character == 'n') {
      componente_a2--;
    } else if (character == 's') {
      componente_a2++;
    } else if (character == 'e') {
      componente_a1++;
    } else if (character == 'w') {
      componente_a1--;
    }
  }
  std::cout << "(" << componente_a1 << ", " << componente_a2 << ")"<< '\n';
return 0;
} 



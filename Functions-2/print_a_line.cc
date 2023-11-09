/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 9/11/2023
  * @brief El programa consiste en intercambiar el valor de dos variables enteras introducidas.
  * @bug There are no known bugs
  */

#include <iostream>
  
void print(int s, char c, int n) {
  while (s > 0) {
  std::cout << " ";
  s--;
  }
  while (n > 0) {
  std::cout << c;
  n--;
  }
}

/** int main (int argc, char* argv[]) {
  int numero_espacios;
  char caracter;
  int repeticiones;
  while (std::cin >> numero_espacios, caracter, repeticiones) {
    print(numero_espacios, caracter, repeticiones);
  }
  return 0;
}
*/


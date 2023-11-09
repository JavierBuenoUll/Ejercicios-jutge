/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 9/11/2023
  * @brief El programa consiste en crear una función que convierta unos segundos dados, en horas,
  * minutos y segundos.
  * @bug There are no known bugs
  */

#include <iostream>

void decompose(int n, int& h, int& m, int& s) {
  h = n / 3600;
  m = (n % 3600) / 60;
  s = n % 60;
  std::cout << h << " " << m << " " << s << '\n';
}

int main (int argc, char* argv[]) {
  int segundos, h, m, s; 
  while (std::cin >> segundos) {
  decompose(segundos, h, m, s);
  }
  return 0;
}

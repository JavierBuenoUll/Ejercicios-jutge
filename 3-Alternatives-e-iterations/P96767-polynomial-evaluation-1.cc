/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file polinomial-evaluation-1.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 28/10/2023
  * @brief This program prints the polinomial evaluation of x number, and its level will depend on  
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>
#include <cmath>

int main () {
 
  double valor_de_x;
  std::cin >> valor_de_x;
  double resultado = 0.0;
  int grado_de_x = 0;
  double coeficientes;
 
  while (std::cin >> coeficientes) {
    resultado += coeficientes * std::pow(valor_de_x, grado_de_x);
    grado_de_x++;
  }
  std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
  return 0;
} 



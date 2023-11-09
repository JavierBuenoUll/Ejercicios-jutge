/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file trigonometry.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 03/11/2023
  * @brief This programs reads a number and prints its sine and cosine.
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
  double angulo;
  while (std::cin >> angulo) {
    const double kPI = M_PI;
    double seno = 0;
    double coseno = 0;
    seno = std::sin(angulo * (kPI / 180));
    coseno = std::cos(angulo * (kPI / 180));
    std::cout << std::fixed << std::setprecision(6) << seno << " " << coseno << std::endl;
    } 
  return 0;
}

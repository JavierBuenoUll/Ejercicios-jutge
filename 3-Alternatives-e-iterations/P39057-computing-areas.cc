/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file computing-areas.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program constist on calculating several areas of different figures.
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip> 
#include <string>
#include <cmath>

int main() {
  
  int number_of_areas;
  std::cin >> number_of_areas;
  std::string figure;
  double base;
  double altura;
  double radio;
  const double kPI = M_PI;
  double area_rectangulo{0};
  double area_circulo{0};

  while (number_of_areas > 0) {
  std::cin >> figure;
  if (figure == "rectangle") {
    std::cin >> base;
    std::cin >> altura;
    area_rectangulo = base * altura;
  std::cout << std::fixed << std::setprecision(6) << area_rectangulo << std::endl;
  }
  if (figure == "circle") {
    std::cin >> radio;
    area_circulo = kPI * radio * radio;
    std::cout << std::fixed << std::setprecision(6) << area_circulo << std::endl;
  }
  number_of_areas--;
  }
  return 0;
}

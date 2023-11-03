/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file computing-square-roots-and-squares.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 03/11/2023
  * @brief This programs reads a number and prints its square root and its square.
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>
#include <cmath>
double Cuadrado(double numero) {
  double numero_cuadrado = numero * numero;
  return numero_cuadrado;
}

double SquareRoot(double numero) {
  double raiz_numero = std::sqrt(numero); 
  return raiz_numero;
}

int main() {
  double numero;
  while (std::cin >> numero) {
    double cuadrado = Cuadrado(numero);
    double raiz = SquareRoot(numero);
    std::cout << std::fixed << std::setprecision(0) <<
                 cuadrado << " " << std::fixed << std::setprecision(6) << raiz << std::endl;
    } 
  return 0;
}

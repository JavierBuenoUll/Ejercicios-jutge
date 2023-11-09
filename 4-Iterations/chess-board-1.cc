/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file squares.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 29/10/2023
  * @brief This programs reads a number and prints like a matrix of numberxnumber.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  int filas = 0;
  int columnas = 0;
  std::cin >> filas >> columnas;
  int monedas_totales = 0;

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; i++)  {
      char chessboard;
      std::cin >> chessboard;
      int monedas = chessboard - '0';
      monedas_totales += monedas;
    }
  }
  std::cout << monedas_totales << std::endl;
}

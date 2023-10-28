/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file rounding.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 27/10/2023
  * @brief El programa consiste en imprimir la parte entera del número, la decimal, y la aproximación.
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>

int main() {

  long double numero_decimal;
  std::cin >> numero_decimal; 
  long parte_entera;
  long parte_decimal;
  long double partes_decimales = numero_decimal - static_cast<int>(numero_decimal);
  if (partes_decimales == 0 ) {
    std::cout << std::fixed << std::setprecision(0) << numero_decimal << " " << numero_decimal << " " << numero_decimal << std::endl;
  return 0;
  } 
  parte_entera = static_cast<int>(numero_decimal);
  if (parte_entera == static_cast<int>(numero_decimal)) {
  std::cout << parte_entera << " ";
  parte_decimal = parte_entera + 1;
  std::cout << parte_decimal << " "; 
  }
  if (numero_decimal - static_cast<int>(numero_decimal) >= 0.5) {
  std::cout <<  parte_entera + 1 << std::endl;
  } else {
    std::cout << parte_entera << std::endl;
  }

return 0;
}


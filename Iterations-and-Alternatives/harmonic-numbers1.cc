/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file harmonic-numbers1.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program prints the sum of 1/1 + ... 1/n numbers, and the result must have 4 digits.
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>

int main () {
 
  int numero;
  double numero_armonico;
 
  std::cin >> numero;
  
  for (double i = 1 ; i <= numero; i++) { // it is writting the armonic is  1/1 + loop 1/2 + loop 1/3
    numero_armonico += 1.0 / i;
  }
  
  std::cout << std::fixed << std::setprecision(4) << numero_armonico << std::endl;
return 0;

} 



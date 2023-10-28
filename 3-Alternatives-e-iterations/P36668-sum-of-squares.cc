/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum-of-squares.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program prints the sum of 1² + ... n².
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
 
  long long numero;
  long long numero_armonico;
 
  std::cin >> numero;
  
  numero_armonico = ((numero * (numero + 1)) * ((2 * numero) + 1)) /6;
 
  std::cout << numero_armonico << std::endl;
return 0;

} 



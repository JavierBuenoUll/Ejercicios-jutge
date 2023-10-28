/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file greatest-common-divider.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program shows the greatest common divider between two numbers.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

int main () {
  int numero;
  std::cin >> numero;

  int digitos = 0;
  int numero_para_digitos = numero;
  if (numero == 0) {
  digitos = 1;
  std::cout << "The number of digits of " << numero << " is " << digitos << "." << std::endl;
  } else { 
    while (numero_para_digitos > 0) {
      numero_para_digitos /= 10;
      digitos++;
    }
  std::cout << "The number of digits of " << numero << " is " << digitos << "." << std::endl;
}
return 0;
} 



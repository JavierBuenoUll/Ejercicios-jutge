/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file conversion_case 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 18/10/2023
  * @brief El programa consiste en realizar la suma de 3 números enteros.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  char letra;
   
  std::cout << "Bienvenido, introduce una letra minúscula " << '\n';
  std::cin >> letra;
  if (65 <= letra && letra <= 90) {
    std::cout << static_cast<char> (letra +32) << '\n';
  } else if (97 <= letra &&  letra<= 122) {
        std::cout << static_cast<char> (letra -32) << '\n';
      }  

  return 0;
}

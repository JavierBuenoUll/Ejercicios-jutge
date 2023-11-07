/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 7/11/2023
  * @brief This program shows the number of digits from a number.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

int number_of_digits(int numero) {
  int digitos{0};
  if (numero == 0) {
    digitos = 1;
    return digitos;
  } else {
    int numero_para_digitos = numero;
    while (numero_para_digitos > 0) {
      numero_para_digitos /= 10;
      digitos++;
    }
    return digitos;
  }
}
int main () {
  int numero;
  while(std::cin >> numero) {
    int numero_de_digitos = number_of_digits(numero);
    std::cout << "number_of_digits(" << numero << ")→" << numero_de_digitos << std::endl;
  }
  return 0;
} 

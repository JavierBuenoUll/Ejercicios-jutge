/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file conversion.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 18/10/2023
  * @brief El programa consiste en realizar la suma de 3 números enteros.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  int anos;
  int dias;
  int horas;
  int minutos;
  int segundos;
   
  std::cin >> anos;
  std::cin >> dias;
  std::cin >> horas;
  std::cin >> minutos;
  std::cin >> segundos;

  
  dias = anos * 365 + dias;
  horas = dias * 24 + horas;
  minutos = horas * 60 + minutos;
  segundos = minutos * 60 + segundos;
  
  std::cout << segundos << '\n';

  return(0);
}

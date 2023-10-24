/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file time-decomposition.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program converts a number of seconds to hours, minutes, and seconds.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  int segundos;
   
  std::cin >> segundos;
  
  int minutos;
  int horas;
 
  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = segundos % 60;

  std::cout << horas << " " << minutos << " " << segundos  << '\n';

  return(0);
}

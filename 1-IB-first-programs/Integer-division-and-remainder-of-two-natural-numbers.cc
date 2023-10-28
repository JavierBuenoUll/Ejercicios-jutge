/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Integer-division-and-remainder-of-two-natural-numbers.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 15/10/2023
  * @brief El programa consiste en dividir dos números enteros y mostrar su resultado y su resto.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  int First_num{};
  int Second_num{};
  
  std::cin >> First_num;
  std::cin >> Second_num;
  
  if (Second_num > 0) { 
    std::cout << First_num / Second_num << " " << First_num % Second_num << std::endl;
  }
   if (Second_num > 0, First_num < 0) {                  
    std::cout << First_num / Second_num << " " << First_num % Second_num << std::endl;
  }

  return(0);
}

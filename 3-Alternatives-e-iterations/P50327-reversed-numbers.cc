/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file reersed-numbers.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program prints the reversed number of the introduced one. 
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  long long First_num{};
  long long Inverso{0};
  
  std::cin >> First_num;

  if (First_num == 0) {
    std::cout << "0" << std::endl;
  return 0;
  }

  if (First_num > 0 && First_num % 10 == 0) {
    while (First_num > 0) {
    int digito = First_num % 10;
    if (First_num % 10 == 0 && Inverso == 0) {
      std::cout << 0;
      }
    Inverso = Inverso * 10 + digito;
    First_num /=10;
}
  } else {
  while (First_num > 0) {
    int digito = First_num % 10;
    Inverso = Inverso * 10 + digito;
    First_num /= 10;
  }
}
    std::cout << Inverso << std::endl;
  return(0);
}

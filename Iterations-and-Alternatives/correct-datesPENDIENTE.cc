/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file correct-dates.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 26/10/2023
  * @brief El programa consiste en imprimir si la fecha introducida es correcta o no según el calendario gregoriano.
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
  
  int day;
  int month;
  int year;
  while (std::cin >> day >> month >> year) {
  
  if ((day <= 0 || day > 31) || (month <= 0 || month > 12)) {
    std::cout << "Incorrect Date" << std::endl;
  } else if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) && (month == 2) && (day > 0 && day <= 29)) {
    std::cout << "Correct Date" << std::endl;
  } else if (((year % 400 !=0) || (year % 4 !=0 && year % 100 == 0)) && (month == 2) && (day > 28)) {
    std::cout << "Incorrect Date" << std::endl;
  } else if ((month <= 7 && month % 2 == 1) || (month == 8 || month == 10 || month == 12) && (day > 0 && day <= 31)) {
    std::cout << "Correct Date" << std::endl;
  } else if (((month <=7 && month % 2 == 0) || (month == 9 || month == 11)) && (day > 0 && day <= 30)) {
    std::cout << "Correct Date" << std::endl;
  } else if (((month <=7 && month % 2 == 0) || (month == 9 || month == 11)) && (day <  0 || day > 30)) {
    std::cout << "Incorrect Date" << std::endl;
  } else {
    std::cout << "Correct Date" << std::endl;
  }
}
  return 0;
}

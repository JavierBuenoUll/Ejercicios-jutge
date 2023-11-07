/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 7/11/2023
  * @brief El programa consiste en imprimir si la fecha introducida es correcta o no.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

bool is_valid_date(const int day, const int month, const int year) {
  int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (year < 1800 || year > 9999 || month < 1 || month > 12 || day < 1) {
    return false;
  } else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    daysInMonth[2] = 29;  // February has 29 days in a leap year
    if (day > daysInMonth[month]) {
    return false;
    }
  } else { 
    return true;
  }
  return true;  
}

int main() {
  int day, month, year;
  while (std::cin >> day >> month >> year) {
  int valid_date = is_valid_date(day, month, year);
  if (valid_date == 1) {
    std::cout << "is_valid_date(" << day << "," << month << "," << year << ")→ true" << std::endl;
    } else {
    std::cout << "is_valid_date(" << day << "," << month << "," << year << ")→ false" << std::endl;
    }
  }
  return 0;
}

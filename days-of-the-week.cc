/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file hola.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 5/10/2023
  * @brief El programa consiste en imprimir "Hello World" en la pantalla.
  * @bug There are no known bugs
  */
#include <iostream>
#include <string>
#include <cmath>
std::string day_of_the_week (int day, int month, int year) { 
  std::string day_of_the_year;
  if (month <= 2) {
    month = month + 10;
    year--;
  } else {
    month = month -2;
  }
  
    int century = year / 100;
    int year_inside_century = year % 100;
    int fecha_final = ((2.6 * month) - 0.2);
    fecha_final = fecha_final  +  day + year_inside_century + (year_inside_century / 4) + (century / 4) - 2 * century;
    while (fecha_final < 0) {
      fecha_final += 7;
    }
    fecha_final = fecha_final % 7;
    if (fecha_final == 0) {
    day_of_the_year = "Sunday";
    } else if (fecha_final == 1) {
      day_of_the_year = "Monday";
    } else if (fecha_final == 2) {
      day_of_the_year = "Tuesday";
    } else if (fecha_final == 3) {
      day_of_the_year = "Wednesday";
    } else if (fecha_final == 4) {
      day_of_the_year = "Thursday";
    } else if (fecha_final == 5) {
      day_of_the_year = "Friday";
    } else {
      day_of_the_year = "Saturday";
    }
  return day_of_the_year;
}
int main(int argc, char* argv[]) {
  int day;
  int month;
  int year;
  while (std::cin >> day >> month >> year) {
    std::string actual_day = day_of_the_week(day, month, year);
    std::cout << "day_of_the_week(" << day << "," << month << "," << year << ")→" << actual_day << std::endl;
  }
  return 0;
}

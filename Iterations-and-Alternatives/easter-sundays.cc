/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file easter-sundays.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 24/10/2023
  * @brief This program prints when the Easter sunday will be in any year1 introduced from 1800 onward.
  * @bug There are no known bugs
  */

#include <iostream>

void fecha_domingo_de_pascua(int year, int &day, int &month) {

  int numero_k = year / 100;
  int numero_x = year % 19;
  int numero_b = year % 4;
  int numero_c = year % 7;

  int numero_q = numero_k / 4;
  int numero_p = (13 + 8*numero_k) / 25;
  int numero_y = (15 - numero_p + numero_k - numero_q) % 30;
  int numero_z = (19*numero_x + numero_y) % 30;
  
  int numero_n = (4 + numero_k - numero_q) % 7;
  int numero_e = (2*numero_b + 4*numero_c + 6*numero_z + numero_n) % 7;

  if ((numero_z + numero_e) <= 9) {
    day = 22 + numero_z + numero_e;
    month = 3;
  } else if ((numero_z == 29) && (numero_e == 6)) {
    day = 19;
    month = 4;
  } else if ((numero_z == 28) && (numero_e == 6) && (numero_x > 10)) {
    day = 18;
    month = 4;
  } else {
    day = numero_z + numero_e - 9;
    month = 4;
  }
}
int main () {

  int year;
  while (std::cin >> year) {
    int day, month;
    fecha_domingo_de_pascua(year, day, month); 
    std::cout << day << "/" << month << std::endl;
  }
return 0;
} 



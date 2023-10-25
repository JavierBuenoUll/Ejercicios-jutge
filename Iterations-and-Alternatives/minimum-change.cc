/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file hora-futura.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 20/10/2023
  * @brief This program prints the future hour if you add x hours to the actual hour. 
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
  int hora_actual;
  std::cout << "Hora actual: ";
  std::cin >> hora_actual;

  std::cout << "Cantidad de horas: ";
  int horas_a_sumar;
  std::cin >> horas_a_sumar;
  
  int hora_final = (hora_actual + horas_a_sumar) % 24; // Una buena práctica es dejar un rango del
  //número que se puede introducir para la hora actual. 
  if (hora_final == 1 && horas_a_sumar == 1) { 
    std::cout << "En " << horas_a_sumar << " hora, el reloj marcará la" << hora_final << '\n';
  }
  if (hora_final == 1 && horas_a_sumar !=1) {
    std::cout << "En " << horas_a_sumar << " horas, el reloj marcará la " << hora_final << '\n';
  } else {
      std::cout << "En " << horas_a_sumar << " horas, el reloj marcará las " << hora_final << '\n';
    }
  return 0;
}

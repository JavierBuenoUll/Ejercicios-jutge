/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file add-one-second.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program works as a clock would when it reaches to the end of a minute or an hour.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  int segundos;
  int minutos;
  int horas;
   
  std::cin >> horas;
  std::cin >> minutos;
  std::cin >> segundos;
  
  int resultado = horas * 3600 + minutos * 60 + segundos +1;
  
  horas = resultado / 3600;
  minutos = (resultado % 3600) / 60;
  segundos = resultado % 60;

  if (horas < 10 && minutos < 10 && segundos < 10) {
    std::cout << "0" << horas << ":" << "0" << minutos << ":0" << segundos << std::endl;
}
  if (horas >= 10 && minutos <10 segundos < 10) {
    std::cout << horas << ":0" << minutos << ":0" << segundos;
}
  if (horas < 10 && minutos >= 10 && segundos < 10) {
    std::cout << "0" << horas << ":" << minutos << ":0" << segundos << std::endl;
} 
  if (horas < 10 && minutos < 10 && segundos >= 10) {
    std::cout << "0" << horas << ":" << "0" << minutos << ":" << segundos << std::endl;
}
  if (horas < 10 && minutos >= 10 && segundos >= 10) {
    std::cout << "0" << horas << ":" << minutos << ":" << segundos << std::endl;
}
  if (horas >= 10 && minutos < 10 && segundos >= 10) {
    std::cout << horas << ":" << "0" << minutos << ":" << segundos << std::endl;
}
  if (horas >= 10 && minutos >= 10 && segundos >= 10) {
    std::cout << horas << ":" << minutos << ":" << segundos << std::endl;
}

  return(0);
}

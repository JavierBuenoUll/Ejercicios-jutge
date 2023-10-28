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
#include <array>

int main () {
  int euros, centimos;  
  std::cin >> euros;
  std::cin >> centimos;
  int euros_valores[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
  int centimos_valores[] = {50, 20, 10, 5, 2, 1};
  int suma_euros[9] = {0};
  int suma_centimos[6] = {0};

  for (int i = 0; i < 9; i++) {
    if (euros >= euros_valores[i]) {
      suma_euros[i] = euros / euros_valores[i];
      euros = euros % euros_valores[i];
    }
  }

  for (int i = 0; i < 6; i++) {
    if (centimos >= centimos_valores[i]) {
      suma_centimos[i] = centimos / centimos_valores[i];
      centimos = centimos % centimos_valores[i];
    }
  }

  std::cout << "Banknotes of 500 euros: " << suma_euros[0] << std::endl;
  std::cout << "Banknotes of 200 euros: " << suma_euros[1] << std::endl;
  std::cout << "Banknotes of 100 euros: " << suma_euros[2]<< std::endl;
  std::cout << "Banknotes of 50 euros: " << suma_euros[3] << std::endl;
  std::cout << "Banknotes of 20 euros: " << suma_euros[4] << std::endl;
  std::cout << "Banknotes of 10 euros: " << suma_euros[5] << std::endl;
  std::cout << "Banknotes of 5 euros: " << suma_euros[6] << std::endl;
  
  std::cout << "Coins of 2 euros: " << suma_euros[7] << std::endl;
  std::cout << "Coins of 1 euro: " << suma_euros[8] << std::endl;

  std::cout << "Coins of 50 cents: " << suma_centimos[0] << std::endl;
  std::cout << "Coins of 20 cents: " << suma_centimos[1] << std::endl; 
  std::cout << "Coins of 10 cents: " << suma_centimos[2] << std::endl;
  std::cout << "Coins of 5 cents: " << suma_centimos[3] << std::endl;
  std::cout << "Coins of 2 cents: " << suma_centimos[4] << std::endl;
  std::cout << "Coins of 1 cent: " << suma_centimos[5] << std::endl;

  return 0;
}

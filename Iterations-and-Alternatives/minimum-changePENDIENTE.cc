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
  int cents_1;
  int cents_2;
  int cents_5;
  int cents_10;
  int cents_20;
  int cents_50;
  
  int euros_1;
  int euros_2;
  
  int banknote_5;
  int banknote_10;
  int banknote_20;
  int banknote_50;
  int banknote_100;
  int banknote_200;
  int banknote_500;

  int suma_centimos;
  int suma_euros;
  
  std::cin >> suma_euros;
  std::cin >> suma_centimos;
  
  banknote_500 = suma_euros % 500;
  banknote_200 = suma_euros % 200 - suma_euros % 500;
  banknote_100 = suma_euros % 100 - suma_euros % 200 - suma_euros % 500;
  banknote_50 = suma_euros % 50 - suma_euros % 100 - suma_euros % 200 - suma_euros % 500;
  banknote_20 = suma_euros % 20 - suma_euros % 50 - suma_euros % 100 - suma_euros % 200 - suma_euros % 500;
  banknote_10 = suma_euros % 10 - suma_euros % 20 - suma_euros % 50 - suma_euros % 100 - suma_euros % 200 - suma_euros % 500;
  banknote_5 = suma_euros % 5 - suma_euros % 10 - suma_euros % 20 - suma_euros % 50 - suma_euros % 100 - suma_euros % 200 - suma_euros % 500;
 
  euros_2 = suma_euros % 2 - suma_euros % 5 - suma_euros % 10 - suma_euros % 20 - suma_euros % 50 - suma_euros % 100 - suma_euros % 200 - suma_euros % 500;
  euros_1 = suma_euros % 1 - suma_euros % 5 - suma_euros % 10 - suma_euros % 20 - suma_euros % 50 - suma_euros % 100 - suma_euros % 200 - suma_euros % 500;

  cents_50 = suma_centimos % 50;
  cents_20 = suma_centimos % 20 - suma_centimos % 50;
  cents_10 = suma_centimos % 10 - suma_centimos % 20 - suma_centimos % 50;
  cents_5 = suma_centimos % 5 - suma_centimos % 10 - suma_centimos % 20 - suma_centimos % 50;

  cents_2 = suma_centimos % 2 - suma_centimos % 5 - suma_centimos % 10 - suma_centimos % 20 - suma_centimos % 50; 
  cents_1 = suma_centimos % 1 - suma_centimos % 2 - suma_centimos % 5 - suma_centimos % 10 - suma_centimos % 20 - suma_centimos % 50;

  std::cout << "Banknotes of 500 euros: " << banknote_500 << std::endl;
  std::cout << "Banknotes of 200 euros: " << banknote_200 << std::endl;
  std::cout << "Banknotes of 100 euros: " << banknote_100 << std::endl;
  std::cout << "Banknotes of 50 euros: " << banknote_50 << std::endl;
  std::cout << "Banknotes of 20 euros: " << banknote_20 << std::endl;
  std::cout << "Banknotes of 10 euros: " << banknote_10 << std::endl;
  std::cout << "Banknotes of 5 euros: " << banknote_5 << std::endl;
  
  std::cout << "Coins of 2 euros: " << euros_2 << std::endl;
  std::cout << "Coins of 1 euro: " << euros_1 << std::endl;

  std::cout << "Coins of 50 cents: " << cents_50 << std::endl;
  std::cout << "Coins of 20 cents: " << cents_20 << std::endl; 
  std::cout << "Coins of 10 cents: " << cents_10 << std::endl;
  std::cout << "Coins of 5 cents: " << cents_5 << std::endl;
  std::cout << "Coins of 2 cents: " << cents_2 << std::endl;
  std::cout << "Coins of 1 cent: " << cents_1 << std::endl;

  return 0;
}

/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file classification-of-characters.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief The program tell you if the letter you introduced is lowercase or uppercase, and if it is a vowel or consonant.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  char letra;
   
  std::cin >> letra;

  if (97 <= letra && letra <= 122) {
    std::cout << "lowercase" << '\n';
    if (letra == 'a' ||  letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') 
      std::cout << "vowel" << '\n';
    else {
      std::cout << "consonant" << '\n';
  }
}

  if (65 <= letra &&  letra<= 90) {
   std::cout << "uppercase" << '\n';
   if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')  
      std::cout << "vowel" << '\n';
   else {
      std::cout << "consonant" << '\n';
    } 
  } 

  return 0;
}

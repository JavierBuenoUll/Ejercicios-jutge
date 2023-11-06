/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 05/11/2023
  * @brief This programs reads a characters and indicates whether it's true or false in many cases.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

void print_line(char c, std::string s, bool b) {
  std::cout << s << "('" << c << "') = ";
  if (b == 1) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }
}

bool si_es_letra(char caracter) {
  if ((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122)) {
    return true;
  } else {
    return false;
  }
}
bool si_es_vocal(char caracter) { 
  if (caracter == 65 || caracter == 69 || caracter == 73 || caracter == 79 || caracter == 85
    || caracter == 65+32 || caracter == 69+32 || caracter == 73+32 || caracter == 79 + 32
    || caracter == 85+32) {
    return true;
  } else {
    return false;
  }
}
bool si_es_consonante(char caracter) { 
  if ((caracter != 65 || caracter != 69 || caracter != 73 || caracter != 79 || caracter != 85 
    || caracter != 65+32 || caracter != 69+32 || caracter != 73+32 || caracter != 79 + 32
    || caracter != 85+32) && ((caracter >= 65 && caracter <= 90) ||
    (caracter >= 97 && caracter <= 122))) {
    return true;
  } else {
    return false;
  }
}
bool si_es_mayuscula(char caracter) {
  if (caracter >= 65 && caracter <= 90) {
    return true;
  } else {
    return false;
  }
}
bool si_es_minuscula(char caracter) {
  if (caracter >= 97 && caracter <= 122) {
    return true;
  } else {
    return false;
  }
}
bool si_es_digito(char caracter) {
  if (caracter >= 48 && caracter <= 57) {
    return true;
  } else {
    return false;
  }
}
int main(int argc, char* argv[]) {
  char caracter;
  std::cin >> caracter;
  print_line(caracter, "letter", si_es_letra(caracter));
  print_line(caracter, "vowel", si_es_vocal(caracter));
  print_line(caracter, "consonant", si_es_consonante(caracter));
  print_line(caracter, "uppercase", si_es_mayuscula(caracter));
  print_line(caracter, "lowercase", si_es_minuscula(caracter));
  print_line(caracter, "digit", si_es_digito(caracter));
  return 0;
} 

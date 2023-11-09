/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 9/11/2023
  * @brief El programa consiste en intercambiar el valor de dos variables enteras introducidas.
  * @bug There are no known bugs
  */

#include <iostream>
// ordenar los números de menor a mayor) 
void sort3(int& a, int& b, int& c) {
  int temp = b;
  int temporal_c = c;
  int temporal_a = a;
  if (a < b && a < c && b < c) {
    a = a;
    b = temp;
    c = temporal_c;
  } else if (a < b && a < c && c < b) {
     a = a;
     b = temporal_c;
     c = temp;
  } else if (b == c && a < b && a < c) {
    a = a;
    b = b;
    c = c;
  } else if (b == c && a > b) {
    a = b;
    b = c;
    c = temporal_a; 
  } else if (b < a && b < c && a < c) {
    a = b;
    b = temporal_a;
    c = temporal_c;
  } else if (b < a && b < c && c < a) {
    a = b;
    b = temporal_c;
    c = temporal_a;
  } else if (a == c && b < a) {
    a = b;
    b = c;
    c = temporal_a;
  } else if (a == c & b > a) {
    a = a;
    b = a;
    c = b;
  } else if (c < a && c < b && a < b) {
    a = c;
    b = temporal_a;
    c = temp;
  } else if (c < a && c < b && b < a) {
    a = c;
    b = temp;
    c = temporal_a;
  } else if (a == b && c < a) {
    a = c;
    b = b;
    c = temporal_a;
  } else if (a == b && c > a) {
    a = a;
    b = b;
    c = c;
  }
  std::cout << a << " " << b << " " << c << " " << std::endl;
}  
    
int main (int argc, char* argv[]) {
  int numero_a;
  int numero_b;
  int numero_c;
  while (std::cin >> numero_a >> numero_b >> numero_c) {
  sort3(numero_a, numero_b, numero_c);  
  }
  return 0;
}

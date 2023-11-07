/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 7/11/2023
  * @brief El programa consiste en imprimir el máximo común divisor de x números.
  * @bug There are no known bugs
  */

#include <iostream>

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {
  int a, b;
  while(std::cin >> a >> b) {
    int greatest_common_divisor = gcd(a, b);
    std::cout << "gcd(" << a << "," << b << ")→" << greatest_common_divisor <<  std::endl;
  }
  return 0;
}

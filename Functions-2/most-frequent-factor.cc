/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 10/11/2023
  * @brief El programa consiste en mostrar el factor más frecuente, a través de tres variables, la
  * primera es la del número a factorizar, la segunda del número que mas se repite, y la tercera de
  * las veces que se repite. 
  * @bug There are no known bugs
  */

#include <iostream>
#include <string> 

void factor(int n, int& f, int& q) {
  f = 1;
  q = 0;
  for (int i = 2; i <= n; i++) {
    int contador = 0;
    while (n % i == 0) {
      n /= i;
      contador++; 
    }
    if (contador > q || contador == q && i < f) {
      f = i;
      q = contador;
    }
  }
}

int main (int argc, char* argv[]) {
  int n;
  int factor_repetido;
  int veces_que_se_repite;
  while (std::cin >> n) {
    factor(n, factor_repetido, veces_que_se_repite);
    std::cout << factor_repetido << " " << veces_que_se_repite << std::endl;;
  }
  return 0;
}

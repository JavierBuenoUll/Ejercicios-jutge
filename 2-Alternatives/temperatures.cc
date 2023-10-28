/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file temperatures.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief The program shows whether the given temperature indicates that it is too cold, too hot, or it is warm. 
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  int degrees;

  std::cin >> degrees;

  if (degrees >= 10 && degrees <= 30) {
    std::cout << "it's ok" << '\n';
  } else {
      if (degrees < 10) {
        std::cout << "it's cold" << '\n';
        if (degrees <= 0)
          std::cout << "water would freeze" << '\n';
       } else {
            if (degrees > 30) {
              std::cout << "it's hot" << '\n';
              if (degrees >= 100)
                std::cout << "water would boil" << '\n';
              }
           }
        }

return 0;
}

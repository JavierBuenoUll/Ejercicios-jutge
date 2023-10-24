/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file la-media.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 22/10/2023
  * @brief This program constist on calculating the average between x numbers, and the result must have 2 digits only.
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip> // For setprecision

int main() {
    double number, suma = 0.0;
    int count = 0;

    while (true) {
        std::string input;
        getline(std::cin, input);

        if (input.empty()) {
            break; // Exit the loop when Enter is pressed
        }

        // Convert the input to a double
        number = stod(input);

        if (number <= 0.0) {
            break; // Exit the loop when a non-positive number is entered
        }
        suma += number;
        count++;
    }

    if (count > 0) {
      double average = suma / count;

        // Print the average with 2 decimal places
      std::cout << std::fixed << std::setprecision(2) << average << std::endl;
    }

    return 0;
}

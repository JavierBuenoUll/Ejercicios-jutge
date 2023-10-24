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
using namespace std;

int main() {
    int hours, minutes, seconds;

    cin >> hours >> minutes >> seconds;
    seconds++;

    if (seconds >= 60) {
        seconds = 0;
        minutes++;
    }

    if (minutes >= 60) {
        minutes = 0;
        hours++;
    }

    if (hours >= 24) {
        hours = 0;
    }

    cout << (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << endl;

    return 0;
}

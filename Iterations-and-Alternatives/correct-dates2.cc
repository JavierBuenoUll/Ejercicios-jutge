#include <iostream>

int main() {
    int day, month, year;

    while (std::cin >> day >> month >> year) {
        bool correct = true;

        if (year < 1800 || year > 9999 || month < 1 || month > 12 || day < 1) {
            correct = false;
        } else {
            int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth[2] = 29;  // February has 29 days in a leap year
            }

            if (day > daysInMonth[month]) {
                correct = false;
            }
        }

        if (correct) {
            std::cout << "Correct Date" << std::endl;
        } else {
            std::cout << "Incorrect Date" << std::endl;
        }
    }

    return 0;
}

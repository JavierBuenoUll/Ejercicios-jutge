#include <iostream>
#include <vector>

int main() {
    int rows, columns;

    // Read the number of rows and columns
    std::cin >> rows >> columns;

    // Create a 2D vector to represent the chessboard
    std::vector<std::vector<int>> chessboard(rows, std::vector<int>(columns, 0));

    // Read the chessboard configuration
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            char coin;
            std::cin >> coin;
            chessboard[i][j] = coin - '0';
        }
    }

    // Calculate the total number of coins
    int totalCoins = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            totalCoins += chessboard[i][j];
        }
    }

    // Print the total number of coins
    std::cout << totalCoins << std::endl;

    return 0;
}

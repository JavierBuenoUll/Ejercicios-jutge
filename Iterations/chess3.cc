#include <iostream>
using namespace std;

int main() {
	int fila{0}, columna{0};
	cin >> fila >> columna;
	int suma{0};
	for (int i{0}; i < fila; i++) {
		for (int j{0}; j < columna; j++) {
		char cheess_board;
		cin >> cheess_board;
		int valores = cheess_board - '0';
		suma += valores;
		}
	}
	cout << suma << endl;;
}

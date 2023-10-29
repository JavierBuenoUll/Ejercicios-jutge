#include <cmath>
#include <iostream>
using namespace std;

int logbase(const int &numero, const int &base) {
  return (numero > (base - 1)) ? 1 + logbase(numero / base, base) : 0;
}

int main() {
  long int base, numero;
  int i{0};
  int result;
  while (cin >> base >> numero) {
    if (base < 2 || numero < 1) {
      return 1;
    }
    cout << logbase(numero, base) << endl;
  }
  return 0;
}

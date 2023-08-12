#include <iostream>

void sumar_uno(int *n);

int main() {

  int numero = 10;
  std::cout << "número antes: " << numero << std::endl;
  sumar_uno(&numero);
  std::cout << "número después: " << numero << std::endl;

  return 0;
}

void sumar_uno(int *n) { *n = *n + 1; }

// int d[10][10];
// for i
//    for j
//       d[i][j]
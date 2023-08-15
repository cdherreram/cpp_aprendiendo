#include <cstdio>
#include <cstdlib>
#include <iostream>

int main() {

  int aleatorio;
  int casillas[10] = {0};

  for (int i = 1; i < 500; i++) {
    // Genera un número entre 1 y 10
    aleatorio = std::rand() % 10 + 1;
    casillas[aleatorio - 1] += 1;
  }

  std::printf("#\t\tcantidad\n");
  for (int j = 0; j < 10; j++) {
    std::printf("%d\t\t%2.5f\n", j + 1, 1.0 * casillas[j] / 500);
  }

  return 0;
}
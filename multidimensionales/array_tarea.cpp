#include <cmath>
#include <cstdio>
#include <iostream>
#include <random>

void inicializar_matriz_identidad(double* m);

int main() {

  const int N = 10;
  double matriz[N][N];

  inicializar_matriz_identidad(&matriz);

  return 0;
}
#include <cmath>
#include <cstdio>
#include <iostream>
#include <random>

int main() {

  const int N = 5, M = 5;

  float matriz[N][M];

  const int SEED = 128;

  std::mt19937 generador(SEED);
  std::uniform_real_distribution<float> distribucion(0.0, 2.0);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      matriz[i][j] = distribucion(generador);
      // Tarea 1: Inicializar la matriz identidad.
      // Tarea 2: Inicializar la matriz (cuadrada) con valores diferentes de
      // cero sólo en la diagonal, y que estos valores distribuyan Poisson
      // (parámetro 3). Tarea 3: Inicializar la matriz (cuadrada) como una
      // matriz triangular superior y que los valores distribuyan normal. Tarea
      // 4: Generar una matriz A (cuadrada) y generar su correspondiente
      // transpuesta B (mínimo 5 x 5). Tarea 5: Comprobar con un generador
      // uniforme entero y con 1000 números entre 1 y 10 que en efecto la
      // distribución es uniforme (como se hizo en aleatorio.cpp)

      std::printf("%5.6f\t\t", matriz[i][j]);
    }
    std::printf("\n");
  }

  return 0;
}
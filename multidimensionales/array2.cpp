#include <cmath>
#include <cstdio>
#include <iostream>

int main() {

  const int N = 5, M = 5;

  float matriz[N][M];

  // |1 |2 |3 | | | | | | |
  // | | | | | | | | | |
  // | | | | | | | | | |
  // | | | | | | | | | |

  float suma = 0.0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      // std::printf("%d\t\t%d\t\t%5.4f\n", i, j, matriz[i][j]);
      //  1.0  2.0  3.0  0.0  0.0 ....  0.0
      //
      suma += 1.0;
      matriz[i][j] = suma;
      std::printf("%p\t\t\t\t", &matriz[i][j]);
    }
    std::printf("\n");
  }

  return 0;
}
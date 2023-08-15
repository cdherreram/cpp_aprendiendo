#include <cmath>
#include <cstdio>
#include <iostream>

int main() {

  float vector[10]; // array primitivo   |  |  |  | ....  |  |  |

  // Inicializando
  for (int i = 0; i < 10; ++i) {
    vector[i] = std::sin(10 - i);
  }

  // Accediendo
  std::printf("j\tvector[j]\n");
  for (int j = 0; j < 10; ++j) {
    std::printf("%d\t\t%4.5f\n", j, vector[j]);
  }

  return 0;
}
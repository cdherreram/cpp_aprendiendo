#include <cstdio>

void sumarUno(int *p, long int n);
// | | | | | | | | |

int main() {

  /*
    Generar dos objetos (.o) donde uno de ellos use funciones con llamado de
    punteros y otro donde no use punteros. Compare el tiempo de ejecución
  */
  const long int N = 100000;
  int a = 100;
  int lista[N] = {0}; // |0|0|0|0|0| | | |a|-|
  // |1|1|1|1|1| | | |a|-|

  for (int i = 10; i < 20; i++) {
    std::printf("%d\n", lista[i]);
  }
  sumarUno(lista, N);

  for (int i = 10; i < 20; i++) {
    std::printf("%d\n", lista[i]);
  }

  return 0;
}

void sumarUno(int *p, long int n) {
  for (int i = 0; i < n; ++i) {
    p[i]++;
  }
}
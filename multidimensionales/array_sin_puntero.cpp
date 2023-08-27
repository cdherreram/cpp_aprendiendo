#include <cstdio>
#include <iostream>
#include <vector>

std::vector<int> sumarUno(std::vector<int> p, long int n);
// | | | | | | | | |

int main() {

  /*
    Generar dos objetos (.o) donde uno de ellos use funciones con llamado de
    punteros y otro donde no use punteros. Compare el tiempo de ejecución
  */
  const long int N = 100000;
  std::vector<int> lista(N); // |0|0|0|0|0| | | |a|-|
  // |1|1|1|1|1| | | |a|-|

  for (int i = 0; i < N; i++) {
    lista[i] = i;
  }

  std::printf("Antes de: \n");
  for (int i = 10; i < 20; i++) {
    std::printf("%d: %d\t dir: %p\n", i, lista[i], &lista[i]);
  }
  
  lista = sumarUno(lista, N);

  std::printf("\nDespues de: \n");
  for (int i = 10; i < 20; i++) {
    std::printf("%d: %d\t dir: %p\n", i, lista[i], &lista[i]);
  }

  return 0;
}

std::vector<int> sumarUno(std::vector<int> p, long int n) {

  std::printf("\nLas direcciones de memoria dentro de la funcion son: \n");
  for (int i = 10; i < 20; i++) {
    std::printf("%d: %p\n", i, &p[i]);
  }

  for (int i = 0; i < n; ++i) {
    p[i]++;
  }
  return p;
}
#include <cstdio> //tiene funcion printf
#include <iostream>

int main() {

  int n = 398;
  int *puntero1 = &n;

  float f = 2.717;
  float *puntero2 = &f;

  std::cout << "n: " << n << std::endl;
  printf("n: %d\n", n);
  std::cout << "dirección de n: " << &n << std::endl;
  printf("dirección de n: %p\n", &n);
  std::cout << "a dónde apunta puntero1? " << puntero1 << std::endl;
  std::cout << "en dónde está puntero1? " << &puntero1 << std::endl;
  std::cout << "llamemos a n a través de su ubicación en la memoria: "
            << *puntero1 << std::endl;

  n = 5630;
  std::cout << std::endl;
  std::cout << "llamemos a n a través de su ubicación en la memoria: "
            << *puntero1 << std::endl;

  *puntero1 = 40;

  std::cout << std::endl;
  std::cout << "Cuánto vale n ahora? " << n << std::endl;

  int g = 9; // 0x7fff8f1ee94c
  puntero1 = &g;
  std::cout << "ahora a dónde apunta el puntero? " << *puntero1 << std::endl;
  std::cout << "ahora a qué dirección apunta el puntero? " << puntero1
            << std::endl;

  return 0;
}
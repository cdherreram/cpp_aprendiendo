#include <iostream>

int main() {
  int a = 300;

  std::cout << a << std::endl;
  std::cout << &a << std::endl;

  int *puntero1;
  puntero1 = &a;
  std::cout << puntero1 << std::endl;
  std::cout << *puntero1 << std::endl;
  std::cout << &puntero1 << std::endl;

  return 0;
}
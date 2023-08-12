#include <iostream>

void entero(int * a) {
  *a = 100;
  std::cout << "a dentro de función: " << a << std::endl;
  std::cout << "dirección de a dentro de función: " << &a << std::endl;
}

int main() {

  int a = 300;

  std::cout << "a: " << a << std::endl;
  std::cout << "size a: " << sizeof(a) << " bytes" << std::endl;
  std::cout << "direccion a: " << &a << std::endl;

  entero(&a);

  std::cout << "a: " << a << std::endl;
  std::cout << "size a: " << sizeof(a) << " bytes" << std::endl;
  std::cout << "direccion a: " << &a << std::endl;

  return 0;
}
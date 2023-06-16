#include "stdio.h"
#include <iostream>

int main(void) {

  int opcion;

  while (true) {

    std::cout << "Introduzca la opción elegida: ";
    std::cin >> opcion;

    printf("La opcion elegida es %d\n", opcion);

    if (opcion < 1 || opcion > 3)
      std::cout << "Repita su elección porque eligió una opción incorrecta\n";
    else
      break;
  }

  return 0;
}
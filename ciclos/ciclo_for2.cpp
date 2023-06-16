#include <iostream>

int main(void) {
  /* Encontrar si un número es divisible por 3 */
  int numero = 10000;

  /* Encontrar todos los múltiplos de 3 mayores a 1 y menores a un número dado*/
  int modulo = 7;

  std::cout << "Los múltiplos de " << modulo << " mayores a 1 y menores a "
            << numero << " son:\n";

  int contador = 0;
  for (int inicio = 1; inicio <= numero; inicio = inicio + 1) {
    if (inicio % modulo == 0) {
      //std::cout << "Múltiplo: " << inicio << std::endl;
      contador = contador + 1;
    }
  }

  std::cout << "El número de múltiplos entre 1 y " << numero << " es "
            << contador << std::endl;

  return 0;
}
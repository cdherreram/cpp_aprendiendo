#include "iostream"

int main() {

  // Indica el número de niveles o pisos que va a tener la torre
  int niveles;

  std::cout << "Introduce el número de niveles: ";
  std::cin >> niveles;

  // Indica la posición en la cual empezarán a aparecer estrellas
  int posicion_inicio_estrella;

  // Indica la longitud de la fila para que haga el salto de línea
  int longitud_fila;

  for (int nivel = 1; nivel <= niveles; nivel++) {

    posicion_inicio_estrella = niveles - nivel;
    longitud_fila = niveles + nivel - 1;
    for (int j = 0; j < longitud_fila; j++) {
      if (j < posicion_inicio_estrella)
        std::cout << " ";
      else
        std::cout << "*";
    }
    std::cout << "\n";
  }

  return 0;
}
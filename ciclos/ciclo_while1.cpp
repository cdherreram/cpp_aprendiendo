#include "stdio.h"
#include <iostream>

int main(void) {
  float conteo;
  /*
  for (conteo = 1; conteo <= 10; conteo = conteo + 0.5) {
    std::cout << conteo << std::endl;
  }

  for (conteo = 2; conteo * 0.5 <= 10; conteo++) {
    std::cout << conteo * 0.5 << std::endl;
  }
  */
  conteo = 0;
  
  while (conteo <= 10) // Dentro hay una condición
  {
    printf("%f\n", conteo);
    conteo = conteo + 0.5;
  }

  return 0;
}
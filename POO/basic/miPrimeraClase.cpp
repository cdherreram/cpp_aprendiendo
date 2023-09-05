#include <cstdio>

class MiPrimeraClase {
public:
  int valor1;
  float valor2;

private:
  int valor3;

public:
  void miMetodo();
};

void MiPrimeraClase::miMetodo(){
  printf("Este es mi primer método\n");
}

int main() {
  MiPrimeraClase primer_objeto; // Declaro y creo una variable de "tipo" MiPrimeraClase
  MiPrimeraClase segundo_objeto;
  primer_objeto.valor1 = 10; // Cambiar el valor
  printf("Valor de valor1 en primer_objeto: %i\n",
         primer_objeto.valor1); // Observar el valor
  primer_objeto.miMetodo();

  return 0;
}
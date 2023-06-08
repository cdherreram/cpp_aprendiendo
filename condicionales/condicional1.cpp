#include <iostream>

int main(){
  std::cout << "Mi primer condicional" << std::endl;

  /*
    Crear una variable que valga 1 o 0.
    Si vale 1, imprima "Ganó".
    Si vale 0, imprima "Perdió".
  */

  int estado; // Declaro
  estado = 0; // Inicializar (dar un valor)

  // ¿Cumple usted la condición?
  if(estado == 0){
    std::cout << "Mi número es " << estado << std::endl;
    std::cout << "Ganó\n";
  }

  if(estado == 1){
    std::cout << "Mi número es " << estado << std::endl;
    std::cout << "Perdió\n";
  }

  if(estado > 2){
    std::cout << "Mi número es " << estado << std::endl;
    std::cout << "Repita el programa\n";
  }
  
  return 0;
}
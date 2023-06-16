#include <iostream>

int main( void ){

  /* Declaramos un número secreto entre 1 y 100 */
  int numero_secreto = 21;

  int numero_usuario;
  std::cout << "Por favor, ingrese un número: ";
  std::cin >> numero_usuario;

  std::cout << "Su número es " << numero_usuario << "\n";

  if(numero_usuario >= 1 && numero_usuario <= 100){
    if(numero_secreto == numero_usuario){
      std::cout << "Adivinó el número!" << std::endl;
    }
    else {
      std::cout << "No adivinó el número secreto.\n";
    }
  }
  else {
    std::cout << "El número debe estar entre 1 y 100\n";
  }

  
  
  
  return 0;
}
#include <iostream>

int main( void ){

  // Número a adivinar
  int numero_secreto = 21;

  // Número introducido por el usuario
  int numero_usuario = 0; // Inicializar el número
  
  while(numero_secreto != numero_usuario){
    std::cout << "Introduzca el número: ";
    std::cin >> numero_usuario;
    std::cout << "Su número es " << numero_usuario << "\n";

    if( numero_secreto == numero_usuario){
      std::cout << "Adivinó!\n";
    }
    else
      std::cout << "Vuelva a intentarlo\n";
  }
    
  return 0;
}
#include <iostream>

int main(){

  // Edad de una persona
  int edad;

  std::cout << "¿Cuál es tu edad?" << std::endl;
  
  //edad = 29; Se convierta en un input
  std::cin >> edad;

  // Mostrar edad
  std::cout << "Edad: " << edad << std::endl;

  int var1, var2;

  std::cout << "Ingrese el primer número: ";
  std::cin >> var1;

  std::cout << "Ingrese el segundo número: ";
  std::cin >> var2;

  int var3 = var1 + var2;
  
  std::cout << "El resultado de la suma es " << var3 << std::endl;
  return 0;
}
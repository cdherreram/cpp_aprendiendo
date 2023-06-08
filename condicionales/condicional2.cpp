#include <iostream>

int main(){

  /*
    Si una persona es mayor de 18, puede beber alcohol.
    Imprima si la persona puede o no beber alcohol
  */

  int edad; //Declarar
  edad = 15; // Inicializar

  std::cout << "La edad es " << edad << "\n";
  if(edad >= 18){
    std::cout << "Puede beber alcohol" << std::endl;
  }
  else {
    std::cout << "No puede beber alcohol" << std::endl;
  }
  
  return 0;
}
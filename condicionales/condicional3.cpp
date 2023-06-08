#include <iostream>

int main(){

  /*
    Si tiene entre 18 y 60 (incluso ambos), no tiene descuento.
    Si tiene más de 60, tiene un descuento del 10%.
    Si tiene menos de 18 (en otro caso), tiene un descuento del 5%.
  */

  int edad = 70; // Declaramos e inicializamos
  std::cout << "La edad es " << edad << std::endl;

  std::string mensaje = "";
  
  if(edad >= 18 && edad <= 60){
    mensaje = "No tiene descuento\n";
  }
  else if (edad > 60){
    mensaje = "Tiene 10% de descuento\n";
  } else {
    mensaje = "Tiene 5% de descuento\n";
  }
  std::cout << mensaje;


  
  return 0;
}
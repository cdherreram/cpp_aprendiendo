#include <iostream>

int main( void ){

  /* Declaramos un número secreto entre 1 y 100 */
  int numero_secreto = 21;

  int num_min; //10
  int num_max; //30

  std::cout << "Elija el número mínimo: ";
  std::cin >> num_min;

  std::cout << "Elija el número máximo: ";
  std::cin >> num_max;

  // for (inicio; condicion de finalizacion; paso)
  for(int num = num_min; num <= num_max; num = num + 1){
    if(num == numero_secreto){
      std::cout << "El número secreto está en el intervalo escogido\n";
    }
  }
 
  return 0;
}
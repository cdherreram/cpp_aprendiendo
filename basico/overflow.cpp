#include <iostream>

int main(){
  // Se declara la variable
  int maxNumber;

  // Se inicializa la variable
  maxNumber = 2147483647;

  // Se imprime 
  std::cout << "Max number: " << maxNumber << std::endl;
  
  maxNumber = maxNumber + 1;

  // Se imprime 
  std::cout << "Max number: " << maxNumber << std::endl;

  maxNumber = maxNumber + 1;
  
  // Se imprime 
  std::cout << "Max number: " << maxNumber << std::endl;
  
  return 0;
}
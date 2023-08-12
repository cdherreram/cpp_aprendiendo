#include <iostream>

int retorna_tres() {
  std::cout << "Entré a la función\n";
  return 3;
}

int retorna_x(int x) {

  for(x = 1; x < 10; x++){
    for(x = 1; x <10 ;x++){
      std::cout << x << std::endl;  
    }
  }
  
  return 2;
}

int main() {
  
  int numero = retorna_x(7);

  std::cout << numero << "\n";

  std::cout << numero + 2 << "\n";

  std::cout << numero * 3 << "\n";

  std::cout << numero / 5.0 << "\n";

  return 0;
}
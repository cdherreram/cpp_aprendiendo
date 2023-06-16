#include <iostream>

int main(void) {

  int num = 8;

  for (int i = 1; i <= num; i++) { // i = i + 1
    for (int j = 1; j <= i; j = j + 1) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
  std::cout << "\nTerminó el ciclo\n";
  
  /*
  i = 6
  j = 6
  *
  **
  ***
  ****
  *****


  */
  return 0;
}
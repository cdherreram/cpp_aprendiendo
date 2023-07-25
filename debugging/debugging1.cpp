#include <iostream>

int divint (int a, int b);

int main(void){

  int x = 5, y = 2;
  std::cout << divint(x, y) << std::endl;

  x = 3, y = 0;
  std::cout << divint(x, y) << std::endl;
  
  return 0;
  
}

int divint (int a, int b){
  return a / b;
}
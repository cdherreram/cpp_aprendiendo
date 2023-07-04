#include <iostream> // std::cout, std::cin
#include <vector>   // std::vector
#include "stdio.h"

// FUNCIÓN 1
std::vector<int> suma_igual_mil(int num_suma) {

  std::vector<int> triplete;
  /*
    No tiene tamaño fijo
    triplete.size()
    triplete.push_back()
    triplete.begin()
    triplete.end()
  */

  for (int a = 1; a < 333; ++a) {
    for (int b = 2; b < 666; ++b) {
      for (int c = 3; c < 999; ++c) {
        if (a + b + c == num_suma) {
          if ((a * a) + (b * b) == (c * c)) {
            triplete.push_back(a);
            triplete.push_back(b);
            triplete.push_back(c);
          }
        }
      }
    }
  }

  return triplete;
}

int main() {
  std::vector<int> triplete_pitagorico = suma_igual_mil(1000);

  int a = triplete_pitagorico[0];
  int b = triplete_pitagorico[1];
  int c = triplete_pitagorico[2];

  std::cout << a << " " << b << " " << c << std::endl;
  
  return 0;
}
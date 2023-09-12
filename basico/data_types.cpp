#include <iostream>

struct objeto {
  double masa;
  double pos_x;
  double pos_y;
  double vel;
  double angulo_inicial;
};

// Struct - Estructura
struct biblioteca {
  std::string libro;
  std::string revistas;
  double numBanhos;
};

int main() {

  // int
  // double
  // float
  // char - character
  // int[]    //array
  // int[][]  //matrix ---- Eigen (librería) ---- vector
  // std::string

  struct objeto masa_1;

  masa_1.masa = 2.4;
  masa_1.pos_x = 1.0;

  std::cout << "masa objeto 1: " << masa_1.masa << std::endl;

  return 0;
}
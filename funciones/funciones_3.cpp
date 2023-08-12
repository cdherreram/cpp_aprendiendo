#include <iostream>

bool es_triplete_pitagorico_suma_a_num_max(int a, int b, int c, int num_max);

int valor_c_triplete(int a, int b);



int main() {
  
  int num_max = 1000;

  
  for (int a = 1; a < num_max; a++) {
    for (int b = 1; b < num_max; b++) {
      for (int c = 1; c < num_max; c++) {
        es_triplete_pitagorico_suma_a_num_max(a,b,c,num_max);
      }
    }
  }
  int a;
  int b = a + 5;
  return 0;
}
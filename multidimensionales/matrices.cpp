#include <cstdio>
#include <random>
#include <cmath>

//void inicializarMatrizIdentidad(float (*m)[3][3], int size);
void inicializarMatrizIdentidad(float *m, int size);


int main(){

  const int N = 3;
   
  float matriz[N][N];
  
  inicializarMatrizIdentidad((float *)matriz, N);
  
  return 0;
}

void inicializarMatrizIdentidad(float (*m)[3][3], int size){
  for(int i = 0; i < size;i++){
    for(int j = 0; j < size; j++){
      if(i==j){
        m[i][j] = 1; 
      }
      else {
        m[i][j] = 0;
      }
    }
  }
}
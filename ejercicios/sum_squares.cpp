#include <iostream>
/*
FUNCIONES
  tipo_de_dato_que_retorna nombre_de_funcion( argumentos ){
    
  }

*/

// Suma de cuadrados
int suma_de_cuadrados( int num_max ){
  // Vamos a hacer la suma de cuadrados
  int suma = 0;
  for(int i = 1; i <= num_max; ++i){
      suma += i*i;
  }
  return suma;
}

// Cuadrado de la suma


int main(){

  int numero_maximo = 10;

  // Resultado de la suma de cuadrados
  int res_suma_sq = suma_de_cuadrados(numero_maximo);

  std::cout << "La suma de cuadrados hasta " << numero_maximo << " es igual a "<< res_suma_sq << std::endl;
  
  return 0;
}
/* ENCABEZADO */
#include <iostream>

// Lee un número ingresado por parte del usuario
int readNumber(void);


// Escribe la suma de los dos números pasados por parámetro
void writeAnswer(int num_1, int num_2);


/* CUERPO */
int main(){

  // Primero, lee los dos números de interés
  int numero_1 = readNumber();
  int numero_2 = readNumber();

  // Imprime el resultado
  writeAnswer(numero_1, numero_2);
  
  return 0;
}

void writeAnswer(int num_1, int num_2){
  std::cout << "La suma de los dos números es " << num_1 + num_2 << std::endl;
}

int readNumber(void){
  int numero;
  std::cout << "Ingrese un número: ";
  std::cin >> numero;
  return numero;
}






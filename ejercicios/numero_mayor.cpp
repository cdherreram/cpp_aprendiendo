#include <iostream>

// Función que recibe un número por parte del usuario
int recibeNumero( void );

// Función que retorna el número mayor entre tres números dados
int numeroMayor(int a, int b, int c);


// Este programa calcula el número mayor entre tres números dados
int main(){

  // Primer número recibido
  int a = recibeNumero();

  // Segundo número recibido
  int b = recibeNumero();

  // Tercer número recibido
  int c = recibeNumero();

  // Número mayor calculado con base en los números ingresados
  int mayor = numeroMayor(a, b, c);

  std::cout << "El número mayor entre los números ingresados es : " << mayor << "\n";
  return 0;
}

int recibeNumero( void ){
  int numero;

  std::cout << "Por favor, ingrese un número: ";
  std::cin >> numero;
  
  return numero;
}

int numeroMayor(int a, int b, int c){
  
  if (a >= b && a >=c){
    return a;
  }
  else {
    if (b >= a && b >= c){
      return b;
    }
    else{
      return c;
    }
  }

  int numero_mayor;
  
  if (a >= b && a >=c){
    numero_mayor =  a;
  }
  else if (b >= a && b >= c){
    numero_mayor = b;
  }
  else {
    numero_mayor =  c;
  }

  return numero_mayor;
}
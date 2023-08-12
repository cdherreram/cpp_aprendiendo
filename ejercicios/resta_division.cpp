#include <iostream>

// Función que recibe un número por parte del usuario
int recibeNumero( void );

int restaNumeros(int a, int b);

double divisionNumeros(int a, int b);

int main(int argc, char **argv){

  // Primer número recibido
  int a = recibeNumero();

  // Segundo número recibido
  int b = recibeNumero();

  std::cout << "La resta entre " << a << " y " << b << " es " << restaNumeros(a, b) << "\n";

  std::cout << "La división entre " << a << " y " << b << " es " << divisionNumeros(a, b) << "\n";
  return 0;
}

int recibeNumero( void ){
  int numero;

  std::cout << "Por favor, ingrese un número: ";
  std::cin >> numero;
  
  return numero;
}

int restaNumeros(int a, int b){
  return a-b;
}

double divisionNumeros(int a, int b){
  /*if (b != 0){
    return 1.0*a/b;
  }
  else{
    std::cout << "WARNING: No se puede dividir entre 0.\n";
    return 0;
  }*/
  return a/b;
}
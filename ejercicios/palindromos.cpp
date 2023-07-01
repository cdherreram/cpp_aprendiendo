#include <iostream>

int main() {

  int numero = 454;
  int unidad;
  int divisor = 1;
  int tamanho_digitos = 3;
  int digitos[tamanho_digitos]; // vectores en C        | 0 | 1  | 2  | 3 | 4 |

  int indice = tamanho_digitos - 1;
  while (numero / divisor >= 1 && indice >= 0) { 
    unidad = numero / divisor;
    digitos[indice] = unidad % 10;
    std::cout << digitos[indice] << "\n";
    
    divisor *= 10; // divisor = divisor * 10
    indice--;      // indice = indice -1; //indice -= 1;
  }

  // digitos = |1|9|8|9|1|
  bool es_palindromo = true;
  for (int i = 0; i < tamanho_digitos; i++) {
    if (digitos[i] != digitos[tamanho_digitos - 1 - i]) {
      es_palindromo = false;
      break;
    }
  }

  if(es_palindromo)
    std::cout << "El número es palíndromo\n";
  else
    std::cout << "El número NO es palíndromo\n";
  return 0;
}
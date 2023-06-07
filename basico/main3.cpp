#include "iostream"

int main(){
    std::string salida1 = "Ejemplo de salida"; //El valor de esta variable se mostrará en pantalla
    int numero = 2; //Este valor también se mostrará en pantalla.
    std::string salida2 = "Desde ProgramarYa."; //Estos valores se concatenarán en una única salida

    //Se concatenan y muestran los valores por pantalla con parámetros de printf
    printf("%s %d. %s \n", salida1.c_str(), numero, salida2.c_str());

   return 0;
  
}
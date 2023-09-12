#include <iostream>

class Figura {

// Atributos
public:
  int numVertices; // num_vertices

private:
  double area;


// Método
public:
  // Getter - Mostrar cosas - obtener el valor del atributo
  int mostrarNumVertices();
  double mostrarArea();

  // Setter - cambiar/configurar
  void cambiarNumVertices(int pNumVertices);
};

int Figura::mostrarNumVertices(){
  return this -> numVertices;
}

void Figura::cambiarNumVertices(int pNumVertices){
  if(pNumVertices > 2){
    this -> numVertices = pNumVertices;  
  }
}



int main(){

  Figura figura1;
  figura1.cambiarNumVertices(4);

  std::cout << "El número de vértices es: " << figura1.mostrarNumVertices() << std::endl;
  
  return 0;
}
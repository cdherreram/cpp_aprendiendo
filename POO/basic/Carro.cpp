#include <iostream>
#include <string>

class Carro {

// Atributos
private:
  std::string marca;
  std::string modelo;
  int anho;
  bool tieneVidriosPolarizados;
  double kilometraje;

// Métodos
public:

////// Constructor
  Carro(std::string pMarca, std::string pModelo, int pAnho);
  Carro(std::string pMarca, std::string pModelo);

////// Getter
  std::string mostrarMarca();
  std::string mostrarModelo();

////// Setter
  void aumentarKilometraje(double aumentoKilometraje);
};

// Constructor
Carro::Carro(std::string pMarca, std::string pModelo, int pAnho){
  this -> marca = pMarca;
  this -> modelo = pModelo;
  this -> anho = pAnho;  
}

Carro::Carro(std::string pMarca, std::string pModelo){
  this -> marca = pMarca;
  this -> modelo = pModelo;
  this -> anho = 2023;  
}

int main(){

  Carro miPrimerCarro("Suzuki", "Swift", 2022);

  Carro otroCarro("Mazda", "Clio");

  std::cout << "El modelo de mi primer carro es " << miPrimerCarro.mostrarModelo() << std::endl; 
  
  return 0;
}

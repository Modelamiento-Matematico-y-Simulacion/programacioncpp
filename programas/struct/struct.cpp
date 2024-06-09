#include <iostream>
#include <string>

struct Persona {
    std::string nombre;
    int edad;
    float altura;
};

int main(){
  Persona persona1;
  persona1.nombre = "Carlos";
  persona1.edad = 22;
  persona1.altura = 1.7;
  
  // Acceso y uso de los miembros de la estructura 
  std::cout << "Nombre: " << persona1.nombre << std::endl;
  std::cout << "Edad: " << persona1.edad << std::endl;
  std::cout << "Altura: " << persona1.altura << " metros" << std::endl;
  
  Persona persona2 = {"María López", 25, 1.65};

  std::cout << "Nombre: " << persona2.nombre << std::endl;
  std::cout << "Edad: " << persona2.edad << std::endl;
  std::cout << "Altura: " << persona2.altura << " metros" << std::endl;

  return 0;
}

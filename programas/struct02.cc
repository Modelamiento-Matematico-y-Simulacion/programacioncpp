#include <iostream>
#include <string>

struct Persona {
    std::string nombre;
    int edad;
    float altura;

    // Función miembro para mostrar información
    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Altura: " << altura << " metros" << std::endl;
    }
};

int main() {
    Persona persona1 = {"Juan Pérez", 30, 1.75};
    Persona persona2;
   persona2.nombre = "Carlos";
   persona2.edad = 22;
   persona2.altura = 1.7;

    // Llamada a la función miembro
    persona1.mostrarInformacion();
    persona2.mostrarInformacion();

    return 0;
}


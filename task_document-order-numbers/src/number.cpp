#include <iostream>
#include <fstream>

int main () {
	
	std::ifstream archivo;
	archivo.open("datos.txt");

	archivo << "Leer la primera línea de texto" << std::endl;
	archivo << "Leer la segunda línea de texto" << std::endl;
	archivo << "Leer la última línea de texto" << std::endl;

	archivo.close();
	return 0;
}

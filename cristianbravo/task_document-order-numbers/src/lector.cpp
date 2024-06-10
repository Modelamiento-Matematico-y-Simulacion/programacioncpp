#include <iostream>
#include <fstream>

int main () {
	char Texto[5] = {0};

	//Abrir el documento
	std::ifstream lectura("datos.txt");

	// Leer el documento usando getline
	 while (lectura.getline(Texto, 5)) {
	// Imprimir el contenido leído
        std::cout << "Número leído: " << Texto << std::endl;
	 }
	
	// Cerrar archivo
	lectura.close();

	return 0;
}

#include <iostream>
#include <cmath>

int main (int argC, char* argv[]) {

	//Imprime los argumentos que se pasen por consola
	std::cout << "Cantidad de números resgitrados: " << (argC - 1) << std::endl;
	std::cout << "Los números son: " << std::endl;

	for (int i = 1; i <= 3 && < argC; i++) {
	std::cout << argv[i] << std::endl;

	}
	return 0;
}

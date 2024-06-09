#include <iostream>
#include <cmath>

// Indicación sobre el proceso a realizar, mediante una declaración
double ordenamiento_numeros(double, double, double); 

int main() {
    double a, b, c;
    std::cout << "Introduzca el primer número: " << std::endl;
    std::cin >> a;
    std::cout << "Introduzca el segundo número: " << std::endl;
    std::cin >> b;
    std::cout << "Introduzca el tercer número: " << std::endl;
    std::cin >> c;

    // Comparamos los valores ingresados
    std::cout << std::endl; 
    std::cout << "Analisis de los números ingresados:" << std::endl;

    if (a > b) {
        std::cout << a << " es mayor que " << b << std::endl; 
    } else {
        std::cout << a << " es menor que " << b << std::endl; 
    }


    if (a > c) { 
        std::cout << a << " es mayor que " << c << std::endl; 
    } else {
        std::cout << a << " es menor que " << c << std::endl;  
    }


    if (b > c) { 
        std::cout << b << " es mayor que " << c << std::endl; 
    } else {
        std::cout << b << " es menor que " << c << std::endl; 
    }

    // Llamada a la función de ordenamiento
    ordenamiento_numeros(a, b, c);

    return 0;
}

// Ordenamiento de los números ingresados
	double ordenamiento_numeros(double a, double b, double c)
{
	double num_menor, num_medio, num_mayor;

// Identificación de los valores
	if (a <= b && a <= c) 
	{
	num_menor = a;
	num_medio = std::min(b, c);
	num_mayor = std::max(b, c);
	}
	
	else if 
	(b <= a && b <= c)
	{
        num_menor = b;
        num_medio = std::min(a, c);
        num_mayor = std::max(a, c);
	}

	else
	{
	num_menor = c;
        num_medio = std::min(b, c);
        num_mayor = std::max(b, c);
	}

// Salida de los numeros ordenados
	std::cout << std::endl;
	std::cout << "El orden de menor a mayor es: " << num_menor <<", " << num_medio << ", " << num_mayor << "." << std::endl;

    return 0;
}

#include <iostream>
#include <algorithm>

struct numeros {
    int num1;
    int num2;
    int num3;
};

int main() {
    numeros numero;

    // Leer números de cuyes ingresados
    std::cout << "¿Cuantos cuyes agarro en el primer intento?: ";
    std::cin >> numero.num1;
    std::cout << "¿Cuantos cuyes agarro en el segundo intento?: ";
    std::cin >> numero.num2;
    std::cout << "¿Cuantos cuyes agarro en el tercer intento?: ";
    std::cin >> numero.num3;

    // Pasar a array para luego ordenar
    int arr[3] = {numero.num1, numero.num2, numero.num3};

    // Ordenar los números
    std::sort(arr, arr + 3);

    // Imprimir los números ordenados
    std::cout << "Según el número de cuyes, el orden es: " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;

    return 0;
}

#include <iostream>

int main() {
    const int size = 8;
    int arr[size];

    // Ingresar los elementos por teclado
    std::cout << "Ingrese " << size << " elementos:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Ordenar los elementos mediante búsqueda exhaustiva
    bool intercambio = true;
    while (intercambio) {
        intercambio = false;
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                // Intercambiar los elementos
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                intercambio = true;
            }
        }
    }

    // Sumar los elementos del arreglo ordenado
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr[i];
    }

    // Imprimir la suma total, el arreglo original y el arreglo ordenado
    std::cout << "Suma total de los elementos del arreglo ordenado: " << suma << std::endl;

    std::cout << "Arreglo original: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Arreglo ordenado: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


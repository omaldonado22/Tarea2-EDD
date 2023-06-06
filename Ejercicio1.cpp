#include <iostream>
using namespace std;
int main() {

    int arreglo[8];

    // Ingresar los elementos por teclado
   
    for (int i = 0; i < 8; i++) {
       cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
          cout << "Ingrese " << i << " elementos:\n";
    }

    // Ordenar los elementos mediante búsqueda exhaustiva ssooo
    bool intercambio = true;
    while (intercambio) {
        intercambio = false;
        for (int i = 0; i < 8 - 1; i++) {
            if (arreglo[i] > arreglo[i + 1]) {
                // Intercambiar los elementos
                int temp = arreglo[i];
                arreglo[i] = arreglo[i + 1];
                arreglo[i + 1] = temp;
                intercambio = true;
            }
        }
    }

    // Sumar los elementos del arreglo ordenado
    int suma = 0;
    for (int i = 0; i < 8; i++) {
        suma += arreglo[i];
    }

    // Imprimir la suma total, el arreglo original y el arreglo ordenado
    std::cout << "Suma total de los elementos del arreglo ordenado: " << suma << std::endl;

    std::cout << "Arreglo original: ";
    for (int i = 0; i < 8; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Arreglo ordenado: ";
    for (int i = 0; i < 8; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


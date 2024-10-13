#include "utils.h"
#include <stdio.h>


// Definición de la estructura con typedef para convertirla en un tipo de datos
typedef struct {
    int arrInt[10];  // Array de enteros positivos con capacidad para 10 valores
    int arrSize;     // Número de elementos almacenados en el array
    int arrAdd;      // Suma de los elementos contenidos en el array
} arrayLength_t;

// Función para inicializar el array con -1 y poner arrSize y arrAdd a 0
int initArray(arrayLength_t *arr) {
    if (arr == NULL) {
        return -1; // Retornamos -1 en caso de que el puntero sea NULL
    }

    arr->arrSize = 0;  // Inicializamos el tamaño en 0
    arr->arrAdd = 0;   // Inicializamos la suma en 0

    for (int i = 0; i < 10; i++) {
        arr->arrInt[i] = -1;  // Inicializamos todas las posiciones del array a -1
    }

    return 0; // Si no hubo errores, retornamos 0
}

// Función para imprimir el contenido de la estructura en el formato especificado
void printArr(arrayLength_t *arr) {
    if (arr == NULL) {
        printf("Error: El puntero de la estructura es NULL\n");
        return;
    }

    printf("{[");
    for (int i = 0; i < 10; i++) {
        printf("%d", arr->arrInt[i]);
        if (i < 9) {
            printf(", "); // Evitar una coma después del último elemento
        }
    }
    printf("], %d, %d}\n", arr->arrSize, arr->arrAdd);
}

// Función principal del programa
int main() {
    arrayLength_t myArray;  // Declaramos una variable del tipo arrayLength_t

    // Inicializamos el array y comprobamos si hubo error
    if (initArray(&myArray) == -1) {
        printf("Error al inicializar el array.\n");
        return -1;
    }

    // Imprimimos el contenido del array inicializado
    printArr(&myArray);

    return 0;
}
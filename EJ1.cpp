#include <stdio.h>
#include "utils.h"

// Implementación de initArray
int initArray(arrayLength_t *arr) {
    if (arr == NULL) {
        return -1;  // Si el puntero es NULL, retornamos -1
    }

    arr->arrSize = 0;  // Inicializamos el tamaño en 0
    arr->arrAdd = 0;   // Inicializamos la suma en 0

    for (int i = 0; i < 10; i++) {
        arr->arrInt[i] = -1;  // Inicializamos todas las posiciones del array a -1
    }

    return 0;  // Retornamos 0 si todo fue bien
}

// Implementación de addValue
void addValue(arrayLength_t *arr, int value) {
    if (arr->arrSize < 10) {  // Comprobamos si hay espacio en el array
        arr->arrInt[arr->arrSize] = value;  // Añadimos el valor
        arr->arrAdd += value;   // Actualizamos la suma
        arr->arrSize++;         // Incrementamos el tamaño del array
    } else {
        printf("Array lleno, no se puede agregar más valores.\n");
    }
}

// Implementación de printArray
void printArray(arrayLength_t *arr) {
    printf("Elementos en el array: ");
    for (int i = 0; i < arr->arrSize; i++) {  // Recorremos el array hasta el número de elementos almacenados
        printf("%d ", arr->arrInt[i]);
    }
    printf("\nNúmero de elementos: %d\n", arr->arrSize);  // Imprimimos el tamaño actual del array
    printf("Suma de los elementos: %d\n", arr->arrAdd);   // Imprimimos la suma de los elementos
}

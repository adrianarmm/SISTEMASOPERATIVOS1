
#include "utils.h"
#include <stdio.h>

int initArray(arrayLength_t *arr) {
    if (arr == NULL) {
        return -1; // Si el puntero es NULL, retorna -1
    }

    arr->arrSize = 0;
    arr->arrAdd = 0;
    for (int i = 0; i < 10; i++) {
        arr->arrInt[i] = -1; // Inicializamos todas las posiciones con -1
    }

    return 0; // Retorna 0 si todo está bien
}

void addValue(arrayLength_t *arr, int value) {
    if (arr->arrSize < 10) {
        arr->arrInt[arr->arrSize] = value;
        arr->arrAdd += value;
        arr->arrSize++;
    } else {
        printf("Array lleno, no se puede agregar más valores.\n");
    }
}

void printArray(arrayLength_t *arr) {
    printf("Elementos en el array: ");
    for (int i = 0; i < arr->arrSize; i++) {
        printf("%d ", arr->arrInt[i]);
    }
    printf("\nNúmero de elementos: %d\n", arr->arrSize);
    printf("Suma de los elementos: %d\n", arr->arrAdd);
}

// utils.h
#ifndef UTILS_H
#define UTILS_H

// Definición de la estructura con typedef para convertirla en un tipo de datos
typedef struct {
    int arrInt[10];  // Array de enteros positivos con capacidad para 10 valores
    int arrSize;     // Número de elementos almacenados en el array
    int arrAdd;      // Suma de los elementos contenidos en el array
} arrayLength_t;

// Declaraciones de las funciones
int initArray(arrayLength_t *arr);  // Inicializa el array
void addValue(arrayLength_t *arr, int value);  // Agrega un valor al array
void printArray(arrayLength_t *arr);  // Imprime el contenido del array

#endif

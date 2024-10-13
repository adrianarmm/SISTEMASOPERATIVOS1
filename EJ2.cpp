#include <stdio.h>

// Definición de la estructura con typedef para convertirla en un tipo de datos
typedef struct {
    int arrInt[10];  // Array de enteros positivos con capacidad para 10 valores
    int arrSize;     // Número de elementos almacenados en el array
    int arrAdd;      // Suma de los elementos contenidos en el array
} arrayLength_t;
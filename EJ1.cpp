#include <stdio.h>

// Definición de la estructura con typedef para convertirla en un tipo de datos
typedef struct {
    int arrInt[10];  // Array de enteros positivos con capacidad para 10 valores
    int arrSize;     // Número de elementos almacenados en el array
    int arrAdd;      // Suma de los elementos contenidos en el array
} arrayLength_t;

// Función para inicializar la estructura
void initArray(arrayLength_t *arr) {
    arr->arrSize = 0;  // Inicializamos el tamaño en 0
    arr->arrAdd = 0;   // Inicializamos la suma en 0
    for (int i = 0; i < 10; i++) {
        arr->arrInt[i] = 0;  // Inicializamos todos los elementos del array en 0
    }
}

// Función para agregar un valor al array
void addValue(arrayLength_t *arr, int value) {
    if (arr->arrSize < 10) {  // Comprobamos si hay espacio en el array
        arr->arrInt[arr->arrSize] = value;  // Añadimos el valor en la posición correcta
        arr->arrAdd += value;   // Actualizamos la suma de los elementos
        arr->arrSize++;         // Incrementamos el tamaño del array
    } else {
        printf("Array lleno, no se puede agregar más valores.\n");
    }
}

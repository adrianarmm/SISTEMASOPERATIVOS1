#include <stdio.h>

#define MAX_SIZE 10

// Declarar la estructura y convertirla en un tipo de datos con typedef
typedef struct {
    int arrInt[MAX_SIZE];  // Array de enteros positivos con capacidad para 10 valores
    int arrSize;           // Número de elementos almacenados
    int arrAdd;            // Suma de los elementos del array
} arrayLength_t;

// Función para inicializar la estructura
void initializeArray(arrayLength_t *arrStruct) {
    arrStruct->arrSize = 0;
    arrStruct->arrAdd = 0;
    for (int i = 0; i < MAX_SIZE; i++) {
        arrStruct->arrInt[i] = 0;
    }
}

// Función para agregar un elemento al array
void addElement(arrayLength_t *arrStruct, int element) {
    if (arrStruct->arrSize < MAX_SIZE) {
        arrStruct->arrInt[arrStruct->arrSize] = element;
        arrStruct->arrSize++;
        arrStruct->arrAdd += element;
    } else {
        printf("Array lleno. No se pueden agregar más elementos.\n");
    }
}

// Función para imprimir el array y la suma de los elementos
void printArray(arrayLength_t *arrStruct) {
    printf("Elementos en el array: ");
    for (int i = 0; i < arrStruct->arrSize; i++) {
        printf("%d ", arrStruct->arrInt[i]);
    }
    printf("\nNúmero de elementos: %d\n", arrStruct->arrSize);
    printf("Suma de los elementos: %d\n", arrStruct->arrAdd);
}

int main() {
    arrayLength_t myArray;

    // Inicializar la estructura
    initializeArray(&myArray);

    // Agregar algunos elementos
    addElement(&myArray, 5);
    addElement(&myArray, 10);
    addElement(&myArray, 7);

    // Imprimir el estado actual del array
    printArray(&myArray);

    return 0;
}

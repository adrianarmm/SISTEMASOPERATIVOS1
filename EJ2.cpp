#include <stdio.h>

#define MAX_SIZE 10

// Declarar la estructura y convertirla en un tipo de datos con typedef
typedef struct {
    int arrInt[MAX_SIZE];  // Array de enteros positivos con capacidad para 10 valores
    int arrSize;           // Número de elementos almacenados
    int arrAdd;            // Suma de los elementos del array
} arrayLength_t;

// Función initArray para inicializar el array con -1 y asignar 0 a arrSize y arrAdd
int initArray(arrayLength_t *arrStruct) {
    if (arrStruct == NULL) {
        return -1; // Retornar error si el puntero es NULL
    }

    for (int i = 0; i < MAX_SIZE; i++) {
        arrStruct->arrInt[i] = -1;  // Poner a -1 todas las posiciones del array
    }
    arrStruct->arrSize = 0;  // Inicializar arrSize a 0
    arrStruct->arrAdd = 0;   // Inicializar arrAdd a 0

    return 0;  // Retornar 0 si no hubo error
}

// Función printArr para mostrar el contenido del array en el formato indicado
void printArr(arrayLength_t *arrStruct) {
    if (arrStruct == NULL) {
        printf("Error: Estructura no inicializada.\n");
        return;
    }

    printf("{[");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d", arrStruct->arrInt[i]);
        if (i < MAX_SIZE - 1) {
            printf(", ");
        }
    }
    printf("], %d, %d}\n", arrStruct->arrSize, arrStruct->arrAdd);
}

int main() {
    arrayLength_t myArray;

    // Inicializar el array usando initArray
    if (initArray(&myArray) == 0) {
        // Imprimir el array inicializado
        printArr(&myArray);
    } else {
        printf("Error al inicializar el array.\n");
    }

    return 0;

#ifdef EJ2
    int main() {
    // Código para el ejercicio 2
    return 0;
}
#endif


}

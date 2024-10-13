

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
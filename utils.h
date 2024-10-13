// utils.h
#ifndef UTILS_H
#define UTILS_H

// Definición de la estructura
typedef struct {
    int arrInt[10];
    int arrSize;
    int arrAdd;
} arrayLength_t;

// Declaración de las funciones
int initArray(arrayLength_t *arr);
void addValue(arrayLength_t *arr, int value);
void printArray(arrayLength_t *arr);

#endif


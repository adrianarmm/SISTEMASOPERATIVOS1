

#ifndef UTILS_H
#define UTILS_H

typedef struct {
    int arrInt[10];
    int arrSize;
    int arrAdd;
} arrayLength_t;

int initArray(arrayLength_t *arr);
void printArr(arrayLength_t *arr);

#endif

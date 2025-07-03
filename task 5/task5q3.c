#include <stdio.h>

#define SIZE 5

void multiply(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int array1[SIZE] = {1, 2, 3, 4, 5};
    int array2[SIZE] = {6, 7, 8, 9, 10};
    int result[SIZE];

    multiply(array1, array2, result, SIZE);

    printf("Scalar multiplication result:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
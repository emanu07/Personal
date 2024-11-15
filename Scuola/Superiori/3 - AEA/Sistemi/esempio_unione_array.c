#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array1[MAX_SIZE], array2[MAX_SIZE], mergedArray[MAX_SIZE * 2];
    int size1, size2, mergedSize, i, j;

    // Input per il primo array
    printf("Inserisci la dimensione del primo array: ");
    scanf("%d", &size1);
    printf("Inserisci gli elementi del primo array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &array1[i]);
    }

    // Input per il secondo array
    printf("Inserisci la dimensione del secondo array: ");
    scanf("%d", &size2);
    printf("Inserisci gli elementi del secondo array: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &array2[i]);
    }

    // Unione degli array
    mergedSize = size1 + size2;
    for (i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for (j = 0; j < size2; j++) {
        mergedArray[i++] = array2[j];
    }

    // Output dell'array unito
    printf("Array unito: ");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size, i, temp;

    // Input per la dimensione dell'array
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &size);

    // Input per gli elementi dell'array
    printf("Inserisci gli elementi dell'array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Invertire l'ordine degli elementi
    for (i = 0; i < size / 2; i++) {
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }

    // Output dell'array invertito
    printf("Array invertito: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size, i, min, second_min;

    // Input per la dimensione dell'array
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &size);

    // Input per gli elementi dell'array
    printf("Inserisci gli elementi dell'array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Trovare il secondo valore più piccolo
    min = array[0]; // Assume il primo elemento come minimo
    second_min = array[0]; // Assume il primo elemento come secondo minimo

    for (i = 1; i < size; i++) {
        if (array[i] < min) {
            second_min = min;
            min = array[i];
        } 
		else if (array[i] < second_min && array[i] != min) {
            second_min = array[i];
        }
    }

    // Output del secondo valore più piccolo
    printf("Il secondo valore più piccolo nell'array : %d\n", second_min);

    return 0;
}


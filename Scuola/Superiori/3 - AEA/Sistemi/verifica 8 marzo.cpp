#include <stdio.h>

int main (void){
    int numeri[10];
    int somma_multipli_di_7 = 0;

    printf("Inserisci 10 numeri:\n");
    
    // Richiesta all'utente di inserire 10 numeri
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &numeri[i]);
    }

    printf("Multipli di 7: ");
    for (int i = 0; i < 10; i++) {
        if (numeri[i] % 7 == 0) {
            printf("%d ", numeri[i]);
            somma_multipli_di_7 += numeri[i];
        }
    }
    printf("\n");

    printf("Numeri pari: ");
    for (int i = 0; i < 10; i++) {
        if (numeri[i] % 2 == 0) {
            printf("%d ", numeri[i]);
        }
    }
    printf("\n");

    printf("Somma dei multipli di 7: %d\n", somma_multipli_di_7);

    return 0;
}

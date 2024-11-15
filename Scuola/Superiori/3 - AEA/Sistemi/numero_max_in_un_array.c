#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define DMAX 100

int main(int argc, char *argv[]) {
	int array[DMAX];
	int D, i, max;
	
	printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &D);
    
    printf("Inserisci gli elementi dell'array: ");
    for (i = 0; i < D; i++) {
        scanf("%d", &array[i]);        
    }
    
    max = array[0];
    for(i=1; i<D; i++){
    	if(array[i] > max)
    	max=array[i];
	}
    
    printf("Il valore massimo nell'array : %d\n", max);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a=0.5;
	float b;
	float c=0;
	do{
		printf("inserisci un numero:\n");
		scanf("%f", &b);
		if(b<a)
			printf("-1\n");
		else if(a<b)
			printf("1\n");
		else
			printf("%f %d uguale a %f", b, 138, a);
	c++;
	}while(c>=0);
	return 0;
}

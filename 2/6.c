/*Napisati program koji sa standardnog ulaza ucitava visecifren broj i ispisuje na standardni izlaz poslednju i predposlednju cifru tog broja (cifru jedinica i cifru desetica)   */

#include <stdio.h>
#include <stdlib.h>


int main(){

	int m,n;

	printf("Unesite broj ");
	scanf("%d",&n);
	printf("\n");
	printf("poslednja cifra je: %d\n",n%10);
	n/=10;
	printf("predposlednja cifra je: %d\n",n%10);

	return 0;
}

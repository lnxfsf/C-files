/* Napisati funkciju za permutovanje cifara cijelog broja. Uzeti trocifren broj. Funkciju pozvati iz
glavnog programa. Provjeriti njen rad. */


#include <stdio.h>
#include <stdlib.h>

int fun(int);

int main(int argc, char *argv[])
{

	int R;
	
	printf("Unesi cijeli broj:\n");
	scanf("%d",&R);  // unos
	printf("Permutovani broj %d\n",fun(R));
	
	
	return 0;
}

int fun(int R){
	int x;
	x=R%10;
	R=R/10;

	while(R!=0){
		x=x*10+R%10;
		R=R/10;
	}
	return x;
}
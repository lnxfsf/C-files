 /* Napisati program koji od ulaznog niza cijelih brojeva kreira novi niz koji sadrži samo
negativne elemente. Dužina niza N se zadaje. */


#include <stdio.h>
#include <stdlib.h>

void fun(int *, int, int *, int *);

int main(int argc, char *argv[])
{

	int x[10],y[10],i,j,nx,ny,pom;

	printf("Unesi duzinu niza:\n");
	scanf("%d",&nx);// n -> duzina niza
	printf("Unesi niz\n");
	
	//----------Unos niza-----------
	for(i=0;i<nx;i++){
		scanf("%d",&x[i]);
	}
	
	//----------formiranje novog niza Y----------
	ny=0;// u startu drugi niz nema ni jednog elementa
	for(i=0;i<nx;i++){
		if (x[i]<0){
		y[ny++]=x[i];//prepisujem negativne elemente u drugi niz
	}
	}

	printf("Novi niz je\n");

	for(i=0;i<ny;i++){
		printf("%d ",y[i]);
	}


	return 0;
}
/*Napisati funkciju kojom se od ulaznog niza realnih brojeva kreira novi niz koji sadrži elemente iz
ulaznog niza koji su veći od njegove srednje vrijednosti. Dužina ulaznog niza je N. Funkciju pozvati iz
glavnog programa. Provjeriti njen rad.*/


#include <stdio.h>
#include <stdlib.h>

void fun(float *, int, float *, int *);

int main(int argc, char *argv[])
{ 

	float x[10],y[10];
	int i,j,nx,ny,pom;

	printf("Unesi duzinu niza:\n");
	scanf("%d",&nx);// n -> duzina niza
	
	printf("Unesi niz\n");

	//----------Unos niza-----------
	for(i=0;i<nx;i++){
		scanf("%f",&x[i]);
	}


	// -----poziv funkcije
	fun(&x[0],nx,&y[0],&ny);// proslijedjivanje preko pokazivaca drugog niza funkciji kako bi mogla da promjeni duzinu i formira novi niz Y


	printf("Novi niz je\n");
	for(i=0;i<ny;i++){
		printf("%f ",y[i]);
	}

	return 0;
}



void fun(float *x, int n,float *y, int *ny){
	int i,br=0;
	float ar=0;
	(*ny)=0;// u startu drugi niz nema ni jednog elementa

	//----------prolazak kroz niz i odredjivanje aritmeticke sredine----

	for(i=0;i<n;i++){
		ar=ar+x[i];
	}

	ar=ar/n;
	
	for(i=0;i<n;i++){
		if (x[i]>ar){
			y[(*ny)++]=x[i];//prepisujem pozitivne elemente u drugi niz

		}
	}

}




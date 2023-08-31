/*Napisati funkciju kojom se od ulaznog niza cijelih brojeva dužine N kreira novi niz koji sadrži
samo pozitivne elementa toga niza. Funkciju pozvati iz glavnog programa. Provjeriti njen rad.*/



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


	// -----poziv funkcije
	fun(&x[0],nx,&y[0],&ny);// proslijedjivanje preko pokazivaca drugog niza funkciji kako bi mogla da promjeni duzinu i formira novi niz Y


	printf("Novi niz je\n");
	for(i=0;i<ny;i++){
		printf("%d ",y[i]);
	}

	
	return 0;
}


//funkcija...
void fun(int *x, int n,int *y, int *ny){
	int i,br=0;
	(*ny)=0;// u startu drugi niz nema ni jednog elementa
	
	//----------prolazak kroz niz----------
	for(i=0;i<n;i++){
		if (x[i]>0){
		y[(*ny)++]=x[i]; //prepisujem pozitivne elemente u drugi niz

		}
	}

}




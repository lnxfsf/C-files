 /* Napisati funkciju kojom se od ulaznog niza cijelih brojeva dužine N kreira novi niz koji sadrži
samo pozitivne elementa toga niza. Funkciju pozvati iz glavnog programa. Provjeriti njen rad.*/

#include <stdio.h>
#include <stdlib.h>

void fun(int *,int,int *,int *);


int main(){
	
	int x[10],y[10],i,j,nx,ny,pom;
	
	printf("Unesi duzinu niza:\n");
	
	scanf("%d",&nx);
	
	printf("Unesi niz\n");
	for(i=0;i<nx;i++){
		scanf("%d",&x[i]);
	}
	fun(&x[0],nx,&y[0],&ny);

	printf("Novi niz je\n");
	
	for(i=0;i<ny;i++){
	printf("%d ",y[i]);
	}
	
	system("PAUSE");
	
	return 0;
}


void fun(int *x,int n, int *y,int *ny){
	int i,br=0;

	(*ny)=0;

	for(i=0;i<n;i++){
		if(x[i]>0){
			y[(*ny)++]=x[i];
		}
	}
}






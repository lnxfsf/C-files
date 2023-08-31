/* Napisati program koji učitava niz od N cijelih brojeva i sortira ih u opadajućem redosledu. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int x[10],i,j,n,pom;
	
	printf("Unesi duzinu niza:\n");
	scanf("%d",&n);
	printf("Unesi niz\n");

	//----------Unos niza-----------
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}

	// -----sortiranje
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (x[i]<x[j]){
				// da je trazila rastuci samo mijenjate znak ">"
				pom=x[i];
				x[i]=x[j];
				x[j]=pom;
				}
			}
		}
		
	//---stampanje niza-----------------
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}

	return 0;
}
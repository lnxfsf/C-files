/*
Napisati program za sortiranje niza od N članova u opadajucem redosledu. Koristiti bilo koji
algoritam sortiranja implementiran u okviru odgovarajuæe funkcije */


#include <stdio.h>
#include <stdlib.h>

void fun(int *,int);



int main(int argc, char *argv[]){
	
	int x[10],i,j,n,pom;
	printf("Unesi duzinu niza: \n");
	scanf("%d",&n);
	printf("Unesi niz\n");
	
	/* Unos niza */
	
	for(i=0;i<n;i++){
		scanf("%d", &x[i]); 
	}
	
	// poziv funkcije 
	fun(&x[0],n);
	
	//stampanje niza
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	
	system("PAUSE");
	return 0;
	
	
	
	
}


void fun(int *x, int n){
	int i,j,pom;
	
	//sortiranje
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
		{
			if (x[i]<x[j]){
				pom=x[i];
				x[i]=x[j];
				x[j]=pom;
			}
		}
	}
	
	
}






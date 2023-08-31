/*Napisati funkciju kojom se odredjuje broj pojavljivanja negativnih cijelih brojeva u nizu od N e
elemenata. Funkciju pozvati iz glavnog programa.*/


#include <stdio.h>
#include <stdlib.h>

int fun(int *,int);

int main(){
	
	int x[10],i,j,n,pom;
	
	printf("Unesi duzinu niza:\n");
	scanf("%d",&n);
	printf("Unesi niz\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	
	printf("Ima %d negativna elementa\n",fun(&x[0],n));
	system("PAUSE";)
	return 0;
	
}



int fun(int *x, int n){
	int i, br=0;
	
	for(i=0;i<n;i++){
		if(x[i]<0){
			br++;
		}
	}
	
	return br;
	
}









 /* Napisati funkciju kojom se odredjuje broj pojavljivanja odredjenog cijelog broja u nizu od N
elemenata. Funkciju pozvati iz glavnog programa. Provjeriti njen rad. */


#include <stdio.h>
#include <stdlib.h>


int fun(int *,int, int);

int main(){
	
	int x[10],i,j,n,pom;
	
	printf("Unesi dužinu niza:\n");
	scanf("%d",&n);
	printf("Unesi niz\n");
	
	//Unos niza
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	
	//poziv funkcije
	printf("Ima %d ponavljanja\n", fun(&x[0],n,5)); 
	
	system("PAUSE");
	return 0;
	
	
	
}



int fun(int *x,int n,int pon){
	int i,br=0;
	
	//prolazak kroz niz
	for(i=0;i<n;i++){
		if(x[i]==pon){
			br++;
		}
	}
	
	return br;
	
	
}




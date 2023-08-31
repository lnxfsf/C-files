/* Napisati program koji učitava niz od N cijelih brojeva i pokazuje koliko je elemeneta djeljivo
sa 3. */


#include <stdio.h>
#include <stdlib.h>

void fun(int *, int);

int main(int argc, char *argv[])
{

	int x[10],i,n,brd=0;
	
	printf("Unesi duzinu niza:\n");
	scanf("%d",&n);
	printf("Unesi niz\n");
	
	//----------Unos niza-----------
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}

	//---odredjivanje broja pozitivnih i negativnih------
	for(i=0;i<n;i++){
		if (x[i]%3==0){//uslov za parne
		brd++;
		 }
	}
	printf("Broj dijeljivih je %d\n",brd);
	
	return 0;
}
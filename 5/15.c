/* Napisati program koji učitava niz od N cijelih brojeva i odredjuje broj pozitivnih i broj
negativnih elemenata.*/

#include <stdio.h>
#include <stdlib.h>

void fun(int *, int);


int main(int argc, char *argv[])
{

	int x[10],i,n,brp=0,brn=0;

	printf("Unesi duzinu niza:\n");
	scanf("%d",&n);
	printf("Unesi niz\n");

	//----------Unos niza-----------
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}

	//---odredjivanje broja pozitivnih i negativnih-----
	for(i=0;i<n;i++){
		if (x[i]>0){//uslov za parne
		brp++; 
		}
	
	if (x[i]<0){
		//uslov za neparne
		brn++; 
		
		}
	}
	printf("Broj pozitivnih je %d\n",brp);
	printf("Broj negativnih je %d\n",brn);

	return 0;
}
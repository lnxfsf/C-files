/* Napisati program koji učitava niz od N cijelih brojeva i odredjuje broj parnih i broj neparnih. */

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

	//---odredjivanje broja parnih i broja neparnih---
	for(i=0;i<n;i++){
		if (x[i]%2==0){
		//uslov za parne
		brp++; 
		
		}
		
		
	if (x[i]%2!=0){  //uslov za neparne
		brn++; 
		
		}
	}
	printf("Broj parnih je %d\n",brp);
	printf("Broj neparnih je %d\n",brn);
	
	return 0;
}
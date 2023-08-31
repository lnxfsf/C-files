/* Napisati program koji učitava niz od N cijelih brojeva i računa sumu parnih i sumu neparnih
elemenata */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int x[10],i,n,sp=0,sn=0;

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
		sp=sp+x[i]; 
		
		}
	if (x[i]%2!=0){
	//uslov za neparne
		sn=sn+x[i]; 
		}
	}
	printf("Suma parnih je %d\n",sp);
	printf("Suma neparnih je %d\n",sn);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>


main(){



	int i,n,sum,pr;
	int x[100];

	printf("Unesite broj elemenata niza:\n");
	scanf("%d",&n);

	printf("Unesite elemente niza:\n");

	//unos niza....
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}


	//odredjivanje, max i min elementa niza
	int max=x[0];
	int min=x[0];


	for(i=1;i<n;i++){
		//odredjivanje max eleenta niza
		if(x[i]>max){
			max=x[i];
		}

		
		if(x[i]<min){
			min=x[i];
		}
		
		

	}

	printf("Max element niza je %d\n",max);
	printf("Min element niza je %d\n",min);


}

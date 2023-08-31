#include <studio.h>
#include <stdlib.h>

main(){

	int a[4][4],i,j,n,sum=0,sum1=0,pom;

	printf("Unesite red matrice:\n");

	scanf("%d",&n);

	printf("Unesite elemente matrice:\n");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}


	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%6d",a[i][j]);
			printf("\n");

		}
	}
	printf("Elementi na glavnoj dijagonali su:\n");

	for(i=0;i<n;i++){
		printf("%d\n",a[i][j]);
		sum+=a[i][i];

	}

	printf("Suma elemenata na glavnoj dijagonali je %d\n",sum);
	printf("Elementi na sporednoj dijagonali su:\n");

	for(i=0;i<n;i++){
		printf("%d\n",a[i][n-i-1]);
		pom=a[i][n-i-1];
		sum1+=pom;
	}


	printf("Suma elemenata na sporednoj dijagonali je %d",sum1);
	printf("\n Elementi matrice u trecem redu su:\n");

	for(i=0;i<n;i++){
		printf("%d\n",a[i][2]);  

	}

	printf("\n Elementi matrice u prvoj koloni:\n");
	for(j=0;j<n;j++){
		printf("%d\n",a[0][j]); 
	}




}

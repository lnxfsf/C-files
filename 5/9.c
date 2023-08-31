/* Napisati program koji unosi matricu (NxN) i sabira elemente na sporednoj dijagonali */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 

	int x[50][50],i,j,n,sum=0;


	printf("Unesi matricu\n");
	scanf("%d",&n);
	printf("Unesi matricu\n");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&x[i][j]);
		}
	}

	sum=0;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i+j)==(n+1)){
				// sporedna dijagonala
				sum=sum+x[i][j];
				//da je bila glavna dijagonala (i==j)
			}
		}
	}
	printf("Suma je %d\n",sum);
	return 0;
}
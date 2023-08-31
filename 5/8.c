/* Napisati program koji unosi matricu (NxN) i stampa transponovanu matricu. */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 

	int x[50][50],i,j,n;

	printf("Unesi matricu\n");
	scanf("%d",&n);
	printf("Unesi matricu\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&x[i][j]);
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",x[j][i]); // transponovana matrica
		}
	printf("\n");
	}

	return 0;
}

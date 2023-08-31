/* Napisati program koji unosi matricu (NxM) i računa sumu pozitivnih elemenata. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 

	int x[50][50],i,j,n,m,sum=0;


	printf("Unesi dimenziju matrice N\n");
	scanf("%d",&n);
	printf("Unesi dimenziju matrice M\n");
	scanf("%d",&m);
	printf("Unesi matricu\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&x[i][j]);
			if (x[i][j]>0){
				sum=sum+x[i][j];
			}
		}
	}

	printf("Suma je:%d\n",sum);

	return 0;
}

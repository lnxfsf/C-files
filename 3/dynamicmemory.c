#include <stdio.h>
#include <stdlib.h>



int main(){
	
	int i=0,n,j=0;
	int *p;

	printf("unesi broj niza: ");
	
	scanf("%d",&n);
	
	p = (int*) malloc(n*sizeof(int));

	for(i;i<n;i++){
		scanf("%d",p+i);
	}

	j=0;

	printf("\n");
	for(j;j<n;j++){
		printf("%d ",*(p+j));
	}

	printf("\nunesi jos %d elemenata: \n", ((2*n)-n));
	p = realloc(p,2*sizeof(int));	

	for(i;i<2*n;i++){
		scanf("%d",p+i);
	}

	
	j=0;
	printf("\n");
	for(j;j<2*n;j++){
		printf("%d ",*(p+j));
	}


	
	free(p);

	printf("\n");
	return 0;
}

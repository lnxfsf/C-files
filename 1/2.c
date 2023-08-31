/* Napisati program koji za unijeti prirodan broj racuna sumu i proizvod svih prirodnih brojeva koji su manji ili jednaki tom broju */


#include <stdio.h>

int main(){


	int a,m,sum=0;


	printf("Unesi prirodan broj\n");
	scanf("%d",&a);



	if(a>0){
		for(m=1;m<=a;m++){
			sum+=m;
		
		
		}

		printf("Suma je %d\n",sum);


	}else{
		printf("Nije prirodan broj\n");
	}


	return 0;
}




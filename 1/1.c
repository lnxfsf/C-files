#include <stdio.h>


int main(){


	float a,n;
	int c;

	printf("Unesi broj ");
	scanf("%f",&a);
	
	n=a;
	c=a;
	c=c/10;
	


	if(c!=0){
	printf("Poslednja cifra unesenog broja je %d\n", (int)a%10);
	
	a=a/10;
	printf("Predposlednja cifra unesenog broja je %d\n",(int)a%10);

	printf("Prikaz prve decimale broja %0.1f\n",n);

	}else{
		printf("Treba makar dvocifren broj !\n");
	}

	return 0;
}

/* 
 *Napisati program koji stampa n redova na ekranu, gde je n proizvoljan prirodan broj , tako sto ce u svakom redu odstampati zvezdice , ciji je broj jednak rednom broju reda
 *
 *
 *
 * */


#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,a,m;

	printf("Koliko redova zelis\n");

	scanf("%d",&a);

	for(i=1;i<=a;i++){
		m=i;
		while(m>0){
			printf("*");
			m-=1;
		}
		printf("\n");

	}



	return 0;
}


/*Napisati program koji ispisuje na ekranu da li se od stranica duzina a, b i c moze saciniti trougao. U zadatku koristiti operatore poredjenja i logicke operatore
 *
 *pa, verovatno ce biti trougao ako stranice nisu jednake, i ako  nisu duzine u minusu
 *
 * */


#include <stdio.h>
#include <stdlib.h>


int a,b,c,br=1;

int main(){


	printf("Unesite stranice trougla\n");

	printf("Unesite stranicu a\n");
	scanf("%d",&a);

	printf("Unesite stranicu b\n");
	scanf("%d",&b);

	printf("Unesite stranicu c\n");
	scanf("%d",&c);

	if(a<=0){
		br=0;
	}
	else if(b<=0){
		br=0;
	}
	else if(c<=0){
		br=0;
	}


	if(br==0){
		printf("Ne moze biti trougao\n");
	}else{
		printf("Ovo je trougao\n");
	}

	return 0;

}




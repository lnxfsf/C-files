/* Napisati program koji ce ucitati niz od 10 prirodnih brojeva, a na ekranu ispisati najmanji broj iz niza */


#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int i[9],min,u,*a;

	
	a=&i[0];


	printf("Unesite niz prirodnih brojeva\n");
	for(u=0;u<10;u++){
		scanf("%d",(i+u));
	}

	a=&i[0];
	min=i[0];

	for(u=1;u<10;u++){
		if(*(i+u)<min){
			min=*(i+u);
		}
	}
	
	printf("Najmanji je: %d \n",min);

	return 0;
}

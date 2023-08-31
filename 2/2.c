#include <stdio.h>
#include <stdlib.h>


//funkcija
int prosirivanje (int *, int , int, int *);

int main(){

	
int x[50],i,n,ind,k,p=0;
int *a;

a=&p;

//unos duzine stringa, kolko zelimo da nam bude string
printf("Unesite duzinu\n");
scanf("%d",&n);

//prompt za unos te zeljene duzine stringa
printf("Unesi niz\n");

//i te duzine ce on i unositi
for(i=0;i<n;i++){
	scanf("%d",&x[i]);
}


printf("Unesi trazeni broj:\n");

scanf("%d",&k);

//string , duzina niza i broj kao argumenti funkcije
ind=prosirivanje(&x[0],n,k,a);

if(ind==1){
	printf("\nNovi niz je:\n");

	for(i=0;i<(n+p);i++){
		printf("[%d]",*(x+i));
	}
	printf("\n");
	
}else{

	printf("\nNovi niz je: \n");
	for(i=0;i<(n);i++){
		printf("[%d]",*(x+i));

	}

	printf("\n");
	return 0;



}




}

//na svaki neparni dodaje broj k
int prosirivanje(int *z,int n,int k,int *u){
	int i,ind=0,y[50],j=0;

	for(i=0;i<n;i++){
		if(*(z+i)%2!=0){
			y[j++]=*(z+i);
			y[j++]=k;
			ind=1;
			*u+=1;

		}else{
			y[j++]=*(z+i);
		}
	}

	for(i=0;i<j;i++){
		*(z+i)=y[i];
		
	
	}

	return ind;


}





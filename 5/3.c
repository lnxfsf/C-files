 /*Napisati sopstvenu funkciju za odredjivanje dužine niza karaktera (stringa). Funkciju pozvati iz
glavnog programa. Provjeriti njen rad.*/






#include <stdio.h>
#include <stdlib.h>


int fun(char *);


int main(){
	
	char s[50];
	printf("Unesi string\n");
	gets(s);//unosenje stringa 
	
	//poziv funkcije
	printf("Ima %d karaktera\n",fun(s));
	fun(s);
	
	system("PAUSE");
	
	
	return 0;
}




int fun(char *s){
	int i,br=0;
	//prolazak kroz niz
	i=0; //od pocetka
	
	while(s[i]!='\0'){
		br++;
		i++;
		
	}
	
	return br;
	
}
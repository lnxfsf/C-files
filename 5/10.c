 /* Napisati program koji učitava rečenicu od najviše 80 znakova i ispisuje koliko se puta pojavljuje
slovo “A” ili “a”. */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	char s[81]; // 80 karaktera + 1 terminacija
	int i,br;

	printf("Unesi string\n");
	gets(s);	//unosenje stringa

	i=0;	// od pocetka

	while(s[i]!='\0'){// do kraja
		if ((s[i]=='a')||(s[i]=='A')){
		br++; 
		}
	i++;
	}

	// -----poziv funkcije
	printf("Ima %d karaktera\n",br); // poziv fun za char samo fun(s)

	return 0;
}
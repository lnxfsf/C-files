/*Ucitati string duzine  n  karaktera i ispisati njegovu duzinu. Nakon toga u taj string kopirati novi string "ZAMJENA"  */


#include <stdio.h>
#include <stdio.h>

main(){
	char str[100];
	
	printf("Unesite string\n");

	gets(str);

	printf("Uneli ste string <%s> ciji je broj elemenata %d:",str,strlen(str));

	strcpy(str,"ZAMENA");
	
	printf("U pocetni string je upisan (kopiran) string \"ZAMENA\"");
	
	puts("\nSadrzaj stringa je:");
	puts(str);

}

/* U glavnoj funkciji učitati string u formi niza karaktera , a potom pozvati funkciju duzina koja izracunava duzinu niza koristeci pokazivace */


#include <stdio.h>
#include <stdlib.h>


main(){
	int n;
	char str[30];

	printf("Unesite vas string:\n");
	fgets(str,30,stdin);
	//gets(str);
	printf("Duzina vaseg stringa je : %d",duzinaniza(str));



}

int duzinaniza(char *p){
	int br=0;
	while(*p!='\0'){
		br++;
		*p++;
	}
	return br;


}


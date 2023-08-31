 /*  U glavnoj funkciji učitati rečenicu u formi niza karaktera , a potom pozvati funkciju koji ce ispisati koliko reci ima učitana rečenica */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int brojreci(char *str){
	int i,reci=0;

	for(i=0;str[i];i++){
		if(str[i]==32){
			reci++;
		}
	}

	if(i>0){
		reci++;
	}

	return reci;

}



int main(){
	char str[1000];
	int brojanjereci;

	printf("Unesite vasu recenicu: ");

	fgets(str,1000,stdin);

	brojanjereci=brojreci(str);
	printf("Broj reci u recenici = %d\n",brojanjereci);



}





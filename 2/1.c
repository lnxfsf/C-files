#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){



int i,n;

char str[20];

//unos rečenice
printf("Unesite vašu rečenicu:\n");

//unos rečenice , u str niz
fgets(str,20,stdin);

//štampanje niza, <%s> je ime niza, a %d , broj karaktera niza, u funkciji strlen() koja kao argument uzima str niz...
printf("Dužina vašeg stringa <%s> je %ld\n",str,strlen(str));


//joins two strings, joins sting unešeni str, i string ZAVRŠETAK, i onda štampa ga na ovaj puts (str)
strcat(str,"ZAVRŠETAK");

//
printf("Novi string izgleda ovako:\n");

//štampanje niza, tj. ispisivanje stinga na ekran
puts(str);

return 0;



}

//53. Napisati program za prebrojavanje parnih brojeva od k do n.


#include <stdio.h>
int main (){

	int i,k,n,br;
	int *p,*o,*kl,*nl;

	p=&i;
	o=&br;
	*o=0;

	kl=&k;
	nl=&n;


	printf("Od broja: ");
	scanf ("%d", kl);
	printf("Do broja: ");
	scanf ("%d", nl);

	for ((*(p))=k; (*(p)) <= n; ++(*(p))){
		if ((*(p))%2 == 0)
			(*(o))++;
	}

	printf("Parnih brojeva u datom intervalu ima: %d\n", (*(o)));

	return 0;
}

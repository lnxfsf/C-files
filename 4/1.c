//53. Napisati program za prebrojavanje parnih brojeva od k do n.





#include <stdio.h>
int main (){

	int i,k,n,br=0;

	printf("Od broja: ");
	scanf ("%d", &k);
	printf("Do broja: ");
	scanf ("%d", &n);

	for (i=k; i <= n; ++i){
		if (i%2 == 0)
			br++;
	}

	printf("Parnih brojeva u datom intervalu ima: %d\n", br);

	return 0;
}

#include <stdio.h>


main(){

	int a=2,b,c=1;
	while (++a<4)
		printf("%d\n",a%2);
	for(b=1;b<=a;b++){
		c*=b;
		printf("%d!=%d\n",b,c);
	}

}

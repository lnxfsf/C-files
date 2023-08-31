#include<stdio.h>

main(){

	int a=5,b=2,c,d,e,f;

	c=a&&b; 

	d=(c==1)?a: c; 

	e=(d==1)? e : c; 

	printf("%d %d\n",d,e);  

	f=(e==2)||(d==5);  
	f=(f!=7);  
	printf("%d",!f);


}

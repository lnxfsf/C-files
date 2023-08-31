/* Napisati program koji za zadata tri realna broja koriscenjem makro zamjene ispisuje najveci
 *
 *
 * */


#include <stdio.h>


int main(){
	
	float a,b,c,max;

	printf("Unesi 3 broja\n");

	scanf("%f ",&a);
	scanf("%f ",&b);
	scanf("%f ",&c);

	
	if(b>a){
		if(b>c){
			max=b;
		}
		
	}else if(c>a){
		if(c>b){
			max=c;
		}
	}else{
		max=a;
	}
	


	printf("Najveci je %0.0f\n",max);

	return 0;
}

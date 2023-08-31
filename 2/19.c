#include <stdio.h>
#include <stdlib.h>

int main(){
		

	int niz[10],raz;
	int i;
	int max=0;
	int min=1000;

	for(i=0;i<5;i++){
		printf("\r\n Upisite broj: ");
		scanf("%d",&niz[i]);

		if(niz[i]>=max){
			max=niz[i];
		}if(niz[i]<=min){
			min=niz[i];
		}

		
		}
		
		printf("\r\n Maximum je %d",max);
		printf("\r\n Minimum je %d",min);


		
		raz=max-min;
		printf("\r\n Razlika minimuma i maksimuma je %d \n",raz);

		



	

	return 0;

}

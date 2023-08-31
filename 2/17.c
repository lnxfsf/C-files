#include <stdio.h>
#include <stdlib.h>

main(){
	int i;
	printf("Prvih 20 neparnih brojeva:\n");

	for(i=0;i<40;i++){
		if(i%2!=0){
			printf("%d\t",i);
		}
	}
	
	
	printf("\n");
}

#include <stdio.h>

main(){
	int n=5,vr,kol;

	for(vr=n;vr>1;vr--){
		for(kol=1;kol<=vr;kol++){
			printf("++");
			printf("\n");
		}
	}

}

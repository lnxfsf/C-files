#include <stdio.h>
#include <stdlib.h>

struct Auto{
	float kubik;
	float km;
	char model[20];

};


int main(){

int i;
struct Auto kola[3];


printf("Unesite informacije o 3 automobila:\n");

for (i=1;i<4;i++){
	printf("Unesite kubikazu automobila broj %d\n",i);
	scanf("%f",&kola[i].kubik);

	printf("Unesite predjenu kilometrazu automobila broj %d\n",i);
	scanf("%f",&kola[i].km);

	printf("Unesite model automobila broj %d\n",i);
	scanf("%s",kola[i].model);




}



return 0;

}

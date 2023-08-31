/* Kreirati strukturu ITkompanija koja sadrzi polja naziv,broj_zaposlenih i godisnji prihodi. U funkciji main kreirati niz IT kompanija i prikazatai njihove nazive , broj zaposlenih i prihode   */



#include <stdio.h>
#include <stdlib.h>

struct ITkompanija{
	char naziv[20];
	int broj_zaposlenih;
	float godisnji_prihodi;
};



int main(){

	int i;
	
	struct ITkompanija IT[3];
	//pointer
	struct ITkompanija *kom = IT;


	printf("Unesite informacije o 3 kompanije:\n");


	for(i=0;i<3;i++){
		printf("Unesite naziv kompanije broj %d\n",(i+1));
		scanf("%s",kom->naziv);
		
		printf("Unesite broj zaposlenih kompanije broj %d\n",(i+1));
		scanf("%d",&(kom)->broj_zaposlenih);
		
		printf("Unesite godisnji prihod kompanije broj %d\n",(i+1));
		scanf("%f",&(kom)->godisnji_prihodi);
		
		kom++;

	}
	
	kom=IT;

	for(i=0;i<3;i++){
	
		printf("Naziv kompanije broj %d je %s, broj zaposlenih je %d a godisnji prihod je %f\n",(i+1),kom->naziv,kom->broj_zaposlenih,kom->godisnji_prihodi);
		
		kom++;
		
	}


	return 0;

}

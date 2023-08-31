#include <stdio.h>
#include <stdio.h>


int main(){


	int i;
	float x;

	char niz[31],znak;
	
	FILE *fp;

	//otvara postojeci fajl za citanje
	fp=fopen("C:\\temp\\CITANJETEX.txt","r");
	
	//ako pointer vraca NULL , onda fajla nema
	if(fp==NULL){
		printf("Nemoguce otvaranje datoteke");
		exit(1);
	

	}else{
	
		//cita sa datoteke, i u promenjive stavlja sadrzaj...
		fscanf(fp,"%d %f\n",&i,&x);
		
		//cita string, 30 karaktera stringa...
		fgets(niz,30,fp);
		
		//znak je single char, sledeci karakter pod kursorom koji je
		znak=fgetc(fp);
		
		//da zatvori fajl citanja..
		fclose(fp);

		printf("\n\nIspisivanje ucitanih vrednosti:\n\n");
		
		printf("\n Ucitani celi brojevi i=%d i realni broj x=%f",i,x);
		
	
		printf("\n Ucitani string : niz=%s",niz);
		
		//tako stampa i karakter...
		printf("Ucitani znak znak=%c",znak);
	}



	return 0;

}

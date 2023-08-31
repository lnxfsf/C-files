#include <stdio.h>
#include <stdlib.h>


int main(){
	
	FILE *fp;
	//otvori, fajl, u write mode, na taj path
	fp=fopen("C\\temp\\UPIS.txt","w");


	if(fp==NULL){
		printf("Nemoguce je kreirati datoteku!!!\n");
		exit(1);  //sa ovim exit code 1, dajemo OS-u poruku, da je doslo do greske, error
	}else{
	
		//unos stringa
		fprintf(fp,"Ovo je pocetak nase datoteke\n");
		
		//unos karaktera
		fprintf(fp,"\n Unosimo karaktere:");
		
		fputc('p',fp);
		fputc(',',fp);
		fputc('Z',fp);
		
		fprintf(fp,"\n");
		
		fprintf(fp,"Unosimo brojeve:");
		
		fprintf(fp,"%d,%d,%d,%d,%d,%d,%d",88,23,3,6,31,29,1);
		
		fputs("\n Ovo je kraj nase datoteke.",fp);
		
		fclose(fp);
	}


	return 0;
}

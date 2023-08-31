
/* Kreirati datoteku CITANJE.txt na putanji C:\Temp čiji je sadrzaj prikazan na slici. Iščitati i prikazati na ekranu sadrzaj fajla */ 

#include <stdio.h>
#include <stdlib.h>


main(){
	FILE *fp;
	fp=fopen("C:\\Temp\\CITANJE.txt","w");

	if(fp==NULL){
		printf("Nemoguce je kreirati datoteku!!!");
	}else{
		fprintf(fp,"Niz brojeva i karaktera");
		fprintf(fp,"%d\n",58);
		fprintf(fp,"%d\n",58);
		fprintf(fp,"%d\n",23);
		fprintf(fp,"%d\n",7);
		fprintf(fp,"%d\n",8);
		fprintf(fp,"%d\n",1);
		fprintf(fp,"%d\n",31);
		fprintf(fp,"%f\n",32.2);
		fputc('A',fp);
		fclose(fp);




	}


}

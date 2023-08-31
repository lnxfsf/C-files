/*Napisati funkciju kojom se izračunava indeks telesne mase BMI po formuli
BMI=tezina_u_kilogramima/(visina_u_metrima) 2 . Tezina i visina se zadaju. Funkciju pozvati iz
glavnog programa. Provjeriti njen rad.*/

#include <stdio.h>
#include <stdlib.h>

float BMI(float,float);

int main(int argc, char *argv[]){
	
	float tez, vis;

	printf("Unesi tezinu:\n");
	scanf("%f",&tez);  // unos

	printf("Unesi visinu\n");
	scanf("%f",&vis);

	printf("BMI je %f\n",BMI(tez,vis));
	
	
	return 0;
}

float BMI(float tez,float vis){
	return tez/(vis*vis);
}
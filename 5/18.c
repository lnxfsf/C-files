/*Napisati funkciju za izračunavanje snage disipacije na otporniku vrijednosti R kroz koji protiče
jednosmjerna struja jačine I. Disipacija se izračunava po formuli P=R*I*I . Funkciju pozvati iz glavnog
programa. Provjeriti njen rad.*/



#include <stdio.h>
#include <stdlib.h>

float disipacija(float,float);

int main(int argc, char *argv[])
{

	float R, I;

	printf("Unesi otpor:\n");
	scanf("%f",&R);// unos

	printf("Unesi struju\n");
	scanf("%f",&I);

	printf("Disipacija je je %f\n", disipacija(R,I));
	
	
	return 0;
}


float disipacija(float R,float I){
	return R*I*I;
}
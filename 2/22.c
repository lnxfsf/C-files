/*Napisati xogram koji sayzi strukturu Tacka, koja definise tacku u dekartovom koordinatnom sistemu i odgovarajucu funkciju za izracunavanje obima pravougaonika definisanog sa četiri tačke u prostoru  */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct TACKA{

	float x,y;

}; 



float ob(struct TACKA prva,struct TACKA druga,struct TACKA treca,struct TACKA cetvrta)
{
	float a,b,c,d,rez;
	
	a=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
	
	b=sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
	
	c=sqrt((d.x-c.x)*(d.x-c.x)+(d.y-c.y)*(d.y-c.y));
	
	d=sqrt((a.x-d.x)*(a.x-d.x)+(a.y-d.y)*(a.y-d.y));

	
	rez=a+b+c+d;
	

	return rez;
}



main(){

	float obim;
	struct TACKA t1;
	struct TACKA t2;
	struct TACKA t3;
	struct TACKA t4;
	

	printf("Molimo unesite koordinate tacke t1:");
	scanf("%f %f",&t1.x,&t1.y);
	

	printf("Molimo unesite koordinate tacke t2:");
	scanf("%f %f",&t2.x,&t2.y);


	printf("Molimo unesite koordinate tacke t3:");
	scanf("%f %f",&t3.x,&t3.y);
	
	printf("Molimo unesite koordinate tacke t4:");
	scanf("%f %f",&t4.x,&t4.y);

	

	
	obim=ob(t1,t2,t3,t4);
	printf("Obim xavougaonika iznosi %.2f",obim);



}




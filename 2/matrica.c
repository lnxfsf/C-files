#include <stdio.h>

main(){

	int i,j, a[3][3],s1=0, s2=0;
    	float ars;
    
    
    	printf("Unesite elemente matrice\n");
    	for(i=0;i<3;i++){
        	for(j=0;j<3;j++){
            		printf("a[%d][%d] ", i, j);
            		scanf("%d", &a[i][j]);
        		}
   		 }
   		 
    	printf("Elementi na sporednoj dijagonali matrice su:\n");
    	for(i=0; i<3; i++){
    		printf("%d\n", a[i][2-i]);
    		s1=s1+a[i][2-i];}
    		printf("Zbir elemenata na sporednoj dijagonali matrice je %d\n", s1);
    		printf("Elementi prve kolone matrice su: ");
    	for(i=0; i<3; i++){
        	printf("\n%d", a[i][0]);
        	s2=s2+a[i][0];
    	}
    	
    	ars=s2/3;
    	printf("\nAritmeticka sredina prve kolone matrice je %f", ars); 
}
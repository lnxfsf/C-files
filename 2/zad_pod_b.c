#include <stdio.h>

void main() {

    int n,i=1;
    
    printf("Koliko prirodnih brojeva zelite da unesete?:");
    scanf("%d", &n);
    
    printf("Prirodni brojevi djeljivi sa 5 ili 2 do tog broja su:\n");
    
    while(i<=n) {
        if(i%7==0 || i%3==0) {
            printf("%d\n", i);
        }
        else;
        	i++;
    }
}

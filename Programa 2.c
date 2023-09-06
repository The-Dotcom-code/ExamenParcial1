#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Impares

int main() {
	int l;
	int i=0;
	printf("Dame un numero\n");
	scanf("%d",&l);
	while(i<l){
		i++;
		if(i%2!=0){
			printf(":%d ",i);
		}
	}
	printf("Son impares");
	
	return 0;
}

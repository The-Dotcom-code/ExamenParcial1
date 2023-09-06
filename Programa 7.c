#include <stdio.h>
#include <stdlib.h>

//Suma de Digitos

int main() {
	int n,d;
	int suma=0;
	int m=10;
	printf("Dame un numero\n");
	scanf("%d",&n);
	while(d>0){
		d=n%10;
		suma+=d;
		n/=10;
	}
	printf("%d son la suma de los digitos",suma);
	
	return 0;
}

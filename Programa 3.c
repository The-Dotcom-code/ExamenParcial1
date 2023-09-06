#include <stdio.h>
#include <stdlib.h>

//Tabla de multiplicar

int main() {
	int i,r;
	int j=1;
	printf("¿De cual tabla de multiplicar te gustaria saber?\n");
	scanf("%d",&i);
	while(j<=10){
		r=i*j;
		printf("%d x %d = %d\n",i,j,r);
		j++;
	}	
	return 0;
}

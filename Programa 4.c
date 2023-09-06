#include <stdio.h>
#include <stdlib.h>

//Numero Negativo

int main() {
	int i;
	int d=1;
	printf("Dame un numero\n");
	scanf("%d",&i);

	while(d==1){
		if(i>0){
			printf("Dame otro numero\n");	
			scanf("%d",&i);
		}
		else if(i<0){
			printf("\a Numero negativo (-)\n");
			d=0;			
		}
	}
	return 0;
}

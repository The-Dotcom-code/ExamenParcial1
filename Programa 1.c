#include <stdio.h>
#include <stdlib.h>

//10 numeros consecutivos

int main() {
	int i;
	int j=0;
	printf("Dame un numero\n");
	scanf("%d",&i);
	while(j<10){
		i++;
		printf("%d\n",i);
		j++;
	}
	return 0;
}

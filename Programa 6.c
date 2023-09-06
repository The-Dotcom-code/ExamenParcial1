#include <stdio.h>
#include <stdlib.h>

//Rombo-Arbol

int main() {
	int n;
	int i=0;
	int j=0;
	printf("De cuantos niveles quieres la parte superior e inferior de tu arbol?\n");
	scanf("%d",&n);
	while(i<n){
		
		while(j<n-i){
			printf("  ");
			j++;
		}
		j=0;
		while(j<2*i+1){
			printf("* ");
			j++;
		}
		j=0;
	printf("\n");
	i++;
	}
	//
	j=0;
	i=0;
	while( i<n*2+1 ){
		printf("* ");
		i++;
	}
	printf("\n");
	j=0;
	i=0;
	while( i<n ){

		while(j<i+1){
			printf("  ");
			j++;
		}
		j=0;
		while(j<2*n-2*i-1){
			printf("* ");
			j++;
		}
		j=0;
	printf("\n");
	i++;
	}
	i=0;
	while( i<n ){
		printf("  ");
		i++;
	}
	printf("I");
	return 0;
}

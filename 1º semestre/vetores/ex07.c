#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	float numeros[10];
	srand(time(NULL));
	for(int i = 0; i < 10; i++){
		numeros[i] = (rand() % 31 + 20);
	}
	for(int i = 0; i < 10; i++){
		printf("%.0f\n", numeros[i]);
}
}


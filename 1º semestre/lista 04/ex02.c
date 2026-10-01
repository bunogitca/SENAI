#include<stdio.h>
void main(){
	float peso, m, e;
	printf("Coloque o peso do peixe : ");
	scanf("%f", &peso);
	if(peso > 50) {
		m = peso - 50;
		e = m * 4 ; 
		printf("Sua multa é de : %f", e);
	}else 
	printf("sem multa");
}
#include<stdio.h>
void main(){
	float numero;
	printf("escreva um numero:");
	scanf("%f", numero);
	if(numero > 0){
		printf("numero positivo");
	} else
	printf("numero negativo");
	 getch();
}
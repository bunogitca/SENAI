#include<stdio.h>
void main(){
	float valor, desconto;
	printf("digite o valor da compra");
	scanf("%f", &valor);
	if(valor > 500){
		desconto = valor * 10 / 100;
		valor = valor - desconto;
	}else if(valor > 200){
		desconto = valor * 10 / 100;
		valor = valor - desconto;
	}
	printf("seu desconto é de %.2f : ", &valor);
	getch();
}
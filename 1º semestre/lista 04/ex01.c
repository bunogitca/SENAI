#include<stdio.h>
void main(){
	float b, c, d;
	char a[100];
	printf("digite seu nome : \n");
	scanf(" %s", &a);
    printf("digite sua altura : \n");
    scanf("%f", &b);
    printf("digite seu peso: \n");
    scanf("%f", &c);
    
    d = c / (b * b); 
    
    printf("seu IMC é : %.2f \n", d);
    //E -> AND -> &&
    //OU -> OR -> ||
    if( d <= 18.5 ){
    	printf("Abaixo do peso");
    }else if(d >= 18.6 && d <= 24.9) {
    	printf("Peso normal");
	}else if(d >= 25 && d <= 29.9) {
		printf("Sobrepeso");
	}else if(d >= 30 && d <= 34.9) {
		printf("Obesidade grau I");
	}else if(d >= 35 && d <= 39.9) {
		printf("Obesidade grau II");
	}else(d <= 40), printf("Obesidade grau III");

    getch();
}
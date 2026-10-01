#include<stdio.h>
void main(){
	float i, aa, an;
	printf("digite o seu ano de nacimento e o ano atual : ");
	scanf ("%f, %f", &an, &aa);
	i = an - aa;
	if (i<= 18){
		printf("voçê é maior de idade");
	}else
	printf("voçê é menor de idade");
	
	getch();
	
		

	
	
}
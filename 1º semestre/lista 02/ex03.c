#include<stdio.h>
void main(){
	float sdn, m, ndp;
	printf(" coloque a soma das notas : ");
	scanf("%f", &sdn);
	printf(" coloque o numero de provas : ");
	scanf("%f", &ndp);
	m = sdn / ndp;
	if (m >= 7){
		printf("aprovado, ");
	}else
	printf("reprovado, ");
	
	printf("sua nota é %.1f", m);
	getch();	
}
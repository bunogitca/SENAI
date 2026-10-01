#include<stdio.h>
void main(){
	float v, d, t;
	int minutos, horas;
	printf("Digite a velocidade km/h e a distancia km:\n");
	scanf("%f %f", &v, &d);
	t = d / v * 60;
	horas = t / 60;
	minutos = t - horas * 60;
	printf("Você levara %d horas e %d minutos para percorrer essa distancia",horas, minutos);
	getch();
}
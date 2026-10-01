#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	char nomes[7][50] = {
		"osmar motta"
		"osmar educado"
		"osmar dito"
		"osmar amado"
		"jacinto pena"
		"jacinto paixão"
		"jacinto raiva"
	};
	srand(time(NULL));
	int indiceSorteado = rand() % 7
	printf("nome sorteado foi %s",nomes [indiceSorteado]);
	}
	
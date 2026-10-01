#include<stdio.h>
int main(){
	char turno[10];
	printf("Digite o turno:\n- manha\n- tarde\n- noite\n");
	scanf(" %s",&turno);
	
	if(strcmp(turno,"manha") == 0){
		printf("Bom dia");
	}else if(strcmp(turno,"tarde") == 0){
		printf("Boa tarde");
	}else if(strcmp(turno,"noite") == 0){
		printf("Boa noite");
	}else{
		printf("Turno inválido");
	}
	getch();
}
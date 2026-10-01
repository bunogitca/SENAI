#include<stdio.h>
#include<windows.h>
struct Cliente {
	char nome[50];
	int idade;
	char email[100];
};
void main(){	
	SetConsoleOutputCP(CP_UTF8);
	struct Cliente clientes[5];
	
	strcpy(clientes[0].nome, "joão da silva");
	clientes[0].idade = 28;
	strcpy(clientes[0].email, "joao@email.com");
	
		strcpy(clientes[1].nome, "luis da silva");
	clientes[1].idade = 45;
	strcpy(clientes[1].email, "ronaldo@email.com");
	
		strcpy(clientes[2].nome, "carlos da silva");
	clientes[2].idade = 86;
	strcpy(clientes[2].email, "carlos@email.com");
	
		strcpy(clientes[3].nome, "ana da silva");
	clientes[3].idade = 35;
	strcpy(clientes[3].email, "ana@email.com");
	
		strcpy(clientes[4].nome, "regina da silva");
	clientes[4].idade = 63;
	strcpy(clientes[4].email, "regina@email.com");
	
	for(int i = 0; i < 5; i++)
	printf("%s\tidade: %d\t%s\n", clientes[i].nome, clientes[i].idade, clientes[i].email);
	
	getch();
}
#include<stdio.h>
#include<windows.h>

struct Cliente{
	char nome[50];
	int idade;
	char email[100];
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Cliente clientes[5] = {
		{"joão da silva", 30, "joão.silva@email.com"},
		{"jorge da silva", 39, "joão.silva@email.com"},
		{"marco da silva", 57, "joão.silva@email.com"},
		{"felipe da silva", 36, "joão.silva@email.com"},
		{"jonas da silva", 42, "joão.silva@email.com"}
};
	FILE *arquivo = fopen("clientes.csv","w");
	if(arquivo == NULL){
		printf("erro ao gravar arquivo\n");
		return 0;
	}
	fprintf(arquivo, "nome,idade,email\n");
	for(int i = 0; i < 5; i++)
		printf("%s, %d anos, %s.\n",clientes[i].nome, clientes[i].idade, clientes[i].email);
	fclose(arquivo);
	printf("arquivo criado com sucesso");
	getch();
}
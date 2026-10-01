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
	
	FILE *arquivo = fopen("clientes.csv","r");
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
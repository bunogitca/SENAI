#include <stdio.h>
#define QTD_PRODUTOS 3

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto lista[QTD_PRODUTOS];
    float total_geral = 0.0;

    printf("--- CADASTRO DE PRODUTOS ---\n");
    for(int i = 0; i < QTD_PRODUTOS; i++) {
        printf("\nProduto %d:\n", i + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]s", lista[i].nome); 
        
        printf("Preco unitario: R$ ");
        scanf("%f", &lista[i].preco);
        
        printf("Quantidade: ");
        scanf("%d", &lista[i].quantidade);
    }
    printf("\n\n--- RELATORIO DE ESTOQUE ---\n\n");
    for(int i = 0; i < QTD_PRODUTOS; i++) {
        float total_produto = lista[i].preco * lista[i].quantidade;
        total_geral += total_produto;

        printf("Produto %d: %s\n", i + 1, lista[i].nome);
        printf("Preco Unitario: R$ %.2f\n", lista[i].preco);
        printf("Quantidade: %d\n", lista[i].quantidade);
        printf("Total em Estoque: R$ %.2f\n", total_produto);
        printf("-----------------------------\n");
    }

    printf("\nVALOR TOTAL GERAL EM ESTOQUE: R$ %.2f\n", total_geral);

    getch();
}

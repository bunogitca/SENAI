#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto prod = {"Notebook", 3500.50, 10};

    float valor_total = prod.preco * prod.quantidade;
    
    printf("--- DADOS DO PRODUTO ---\n");
    printf("Nome: %s\n", prod.nome);
    printf("Preco unitario: R$ %.2f\n", prod.preco);
    printf("Quantidade em estoque: %d\n", prod.quantidade);
    printf("Valor total em estoque: R$ %.2f\n", valor_total);

    getch();
}

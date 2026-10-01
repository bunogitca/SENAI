#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto prod = {"Notebook", 3500.50, 10};

    printf("--- DADOS DO PRODUTO ---\n");
    printf("Nome: %s\n", prod.nome);
    printf("Preco: R$ %.2f\n", prod.preco);
    printf("Quantidade em estoque: %d\n", prod.quantidade);

 getch();
}

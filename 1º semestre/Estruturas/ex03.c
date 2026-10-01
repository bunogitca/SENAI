#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {

    struct Produto lista[3] = {
        {"Notebook", 3500.50, 10},
        {"Smartphone", 1800.00, 15},
        {"Mouse Sem Fio", 85.90, 50}
    };

    float total_geral = 0.0;

    printf("--- RELATORIO DE ESTOQUE ---\n\n");

    for(int i = 0; i < 3; i++) {

        float total_produto = lista[i].preco * lista[i].quantidade;
        
        total_geral += total_produto;

        printf("Produto %d: %s\n", i + 1, lista[i].nome);
        printf("Preco Unitario: R$ %.2f\n", lista[i].preco);
        printf("Quantidade: %d\n", lista[i].quantidade);
        printf("Total em Estoque: R$ %.2f\n", total_produto);
        printf("\n");
    }

    printf("\nVALOR TOTAL GERAL EM ESTOQUE: R$ %.2f\n", total_geral);

    getch();
}

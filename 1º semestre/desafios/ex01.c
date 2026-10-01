#include <stdio.h>

float soma(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mult(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }

int main() {
    float n1, n2;
    int op;

    printf("Numeros: ");
    scanf("%f %f", &n1, &n2);

    printf("1-Soma, 2-Sub, 3-Mult, 4-Div: ");
    scanf("%d", &op);

    if (op == 1) printf("Result: %.2f\n", soma(n1, n2));
    if (op == 2) printf("Result: %.2f\n", sub(n1, n2));
    if (op == 3) printf("Result: %.2f\n", mult(n1, n2));
    if (op == 4) {
        if (n2 == 0) printf("Erro: Divisao por zero\n");
        else printf("Result: %.2f\n", div(n1, n2));
    }
    return 0;
}

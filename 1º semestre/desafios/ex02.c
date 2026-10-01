#include <stdio.h>

long long fatorial(int n) {
    long long f = 1;
    while (n > 1) f *= n--;
    return f;
}

int main() {
    int num;
    printf("Numero: ");
    scanf("%d", &num);

    if (num < 0) printf("Erro: Negativo\n");
    else printf("Resultado: %lld\n", fatorial(num));

    return 0;
}

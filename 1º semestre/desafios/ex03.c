#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; i++) 
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int num;
    printf("Numero: ");
    scanf("%d", &num);

    if (ehPrimo(num)) printf("E primo\n");
    else printf("Nao e primo\n");

    return 0;
}

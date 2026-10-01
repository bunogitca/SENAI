#include <stdio.h>
float calcularMedia(float numeros[], int tamanho) {
    float soma = 0;
    
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return soma / tamanho;
}
int main() {
    int tamanho;
    float arrayNumeros[100];
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &arrayNumeros[i]);
    }
    float media = calcularMedia(arrayNumeros, tamanho);
    printf("\nA media e: %.2f\n", media);

getch();
}

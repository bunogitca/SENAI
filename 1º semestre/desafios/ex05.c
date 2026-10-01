#include <stdio.h>
void ordenar(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (arr[i] > arr[j]) {
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

int main() {
    int tam, arr[100];
    printf("Tamanho do array: ");
    scanf("%d", &tam);
    for (int i = 0; i < tam; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    ordenar(arr, tam);
    printf("\nArray ordenado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

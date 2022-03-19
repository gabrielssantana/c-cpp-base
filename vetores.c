#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

void main() {
    setlocale(LC_ALL, "");
    int vetor[TAM];
    printf("Defina 3 valores para o vetor:");
    for(int i = 0; i < TAM; i++) {
        printf("\nValor %d = ", i + 1);
        scanf("%d", &vetor[i]);
    };

    for (int i = 0; i < TAM; i++){
    printf("\n\nValor %d = %d\n", i + 1, vetor[i]);
};
}
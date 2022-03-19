#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    printf("Operações matemáticas\n\n");

    int a = 5, b = 3;

    printf("Soma de %d e %d \n%d\n\n", a, b, a + b);

    printf("Subtração de %d e %d \n%d\n\n", a, b, a - b);

    printf("Multiplicação de %d e %d \n%d\n\n", a, b, a * b);

    printf("Divisão de %d e %d \n%d\n\n", a, b, a / b);

    printf("Resto de %d e %d \n%d\n\n", a, b, a % b);

    printf("O valor absolute de -3 é \n%d\n\n", abs(-3));

    system("pause");
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "");
    srand(((unsigned)time == NULL));

    int aleatorio = rand() % 3;

    printf("%d", aleatorio);

}
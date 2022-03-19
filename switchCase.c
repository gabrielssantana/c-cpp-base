#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int a = 69, b = 10, c = 15;
    char d = 'x';

    switch (a)
    {
    case 1:
        printf("Caso 1");
        break;
    case 10:
    printf("Caso 2");
    break;
    case 0:
    printf("Caso 3");
    break;

    default:
    printf("Falha");
        break;
    }
}

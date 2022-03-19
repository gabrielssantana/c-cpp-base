#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    char palavra[255];
    printf("Digite uma palavra\n");
    setbuf(stdin, 0);
    fgets(palavra, 255, stdin);
    printf("O comprimento da string é %d\n", strlen(palavra));
    palavra[strlen(palavra) - 1] = '\0';
    printf("%s", palavra);

}
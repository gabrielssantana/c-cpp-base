#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    int option;
    printf("Escolha a opção desejada:\n\n");

    while (option < 1 || option > 4) {
    printf("1 - Dedo no cu.\n");
    printf("2 - Dedo no cu da tua mãe.\n");
    printf("3 - Dedo no cu do teu pai.\n");
    printf("4 - Dedo no cu de todo mundo i foudasiiii.\n\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Vou abutar-me meu dedo no teu cu.\n\n");
        break;
        case 2:
        printf("Vou abutar-me meu dedo no cu da tua mãe.\n\n");
        break;
        case 3:
        printf("Vou abutar-me meu dedo no cu do teu pai.\n\n");
        break;
        case 4:
        printf("Vou abutar-me meu dedo no cu de todo mundo i foudasiii.\n\n");
        break;

    default:
        printf("Vou abuta o dedo no cu de nimguen si tu dont select a valid númericus, papaix!\n\n");
        break;
    }

    };

    printf("Tu é key");

}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");
    int a = 5, b = 10, c = 15;

    if (a > 20 && a < 1 || a == 5) {
        printf("foi");
    }


}

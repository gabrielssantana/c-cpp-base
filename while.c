#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL,"");
    int a = 0;

while (a <=10)
{
    printf("%d\n\n", a);
    a++;
};

do {

    printf("Fiz antes de validar\n\n");

} while (a < 10);

for (int i = 0; i<=10; i++){
    printf("Tabuada do 48: 48 X %d = %d\n\n", i, 48 * i);
};

}
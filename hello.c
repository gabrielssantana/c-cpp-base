#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    printf("Olá");
    int a = 5;
    int b = 3;
    printf("\n\nO valor de a é:\n%d", a);
    printf("\n\nO valor de b é:\n%d", b);
    printf("\n\nO valor de a + b é:\n%d", a + b);
    printf("\n\nInsira um novo valor para a:\n");
    fflush(stdin);
    scanf("%d", &a);
    printf("O novo valor de a é:\n%d", a);

    float c = 5.33;
    printf("\n\nO valor de c é:\n%f", c);
    printf("\n\nInsira um novo valor para c:\n");
    fflush(stdin);
    scanf("%f", &c);
    printf("O novo valor de c é:\n%f", c);

    char d = 'D';
    printf("\n\nO valor de d é:\n%c", d);
    printf("\n\nInsira um novo valor para d:\n");
    fflush(stdin);
    scanf("%c", &d);
    printf("O novo valor de d é:\n%c", d);


}
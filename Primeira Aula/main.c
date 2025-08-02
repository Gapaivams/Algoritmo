#include <stdio.h>

int main()
{

    int num1;
    double dou1;
    char char1;

    printf("Digite um caractere: ");
    scanf("%c", &char1);
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um decimal: ");
    scanf("%lf", &dou1);


    printf("inteiro: %d, double: %.3lf, caractere: %c", num1, dou1, char1);



    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1,num2,result;
    char char1;

    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    getchar();

    /*
    result = num1 + num2;
    printf("O resultado da soma eh: %d", result);
    */

    printf("Deseja soma-los? [S] ou [N]: \n");
    scanf("%c", &char1);


    if (char1 == 'S') {
        result = num1 + num2;
        printf("O resultado da soma eh: %d", result);
    } else {
        printf("O primeiro numero eh: %d\nO segundo numero eh: %d", num1,num2);

    }


    return 0;
}

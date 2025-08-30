#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*
    double num1,num2;
    char operacao;

    printf("Digite um numero: ");
    scanf("%lf", &num1);
    printf("Digite a operacao que deseja realizar (+; -; *; /): ");
    scanf(" %c", &operacao);
    printf("Digite outro numero: ");
    scanf("%lf", &num2);

    switch(operacao){
        case '+':{
                printf("Resultado = %.2lf", num1 + num2);
                break;
                }
        case '-':{
                printf("Resultado = %.2lf", num1 - num2);
                break;
                }
        case '*':{
                printf("Resultado = %.2lf", num1 * num2);
                break;
                }
        case '/':{
                if (num2 == 0){
                    printf("Nao eh possivel dividir por zero");
                    break;
                } else{
                    printf("Resultado = %.2lf", num1 / num2);
                    break;
                }
                }
        default:{
                printf("Opcao invalida!");
                break;
                }
    }

    */


    /*
    int num,result;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    result = 1;

    if (num > 0){
        while(num != 0){
            result *= num;
            num --;
        }
    } else {
        printf("O numero que digitou eh negativo, digite um numero positivo");
    }

    printf("%d", result);
    */



    /*
    int n, num, somaP, somaI, numI;
    double media;

    printf("Digite o numero de repeticoes: ");
    scanf("%d", &n);

    somaP = 0;
    somaI = 0;
    numI = 0;

    while (n != 0){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0){
            somaP = somaP + num;
        } else if(num % 2 != 0){
            somaI = somaI + num;
            numI += 1;
        }

        n -= 1;
    }

    media = (double) somaI / numI;

    printf("%d\n", somaP);
    printf("%.2lf\n", media);
    */



    /*
    int num, soma, i;
    double media;

    i = 0;
    soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num != 0){
        soma = soma + num;

        i += 1;

        printf("Digite um numero: ");
        scanf("%d", &num);
    }

    media = (double) soma / i;

    printf("%.2lf", media);
    */


    /*
    double num, men;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    men = num;

    while(num != 0){
        if(num < men){
            men = num;
        }

        printf("Digite um numero: ");
        scanf("%lf", &num);
    }

    printf("%.2lf", men);
    */



    /*
    int num = 0;

    do{
        num ++;
        printf("%d\n", num);
    } while (num < 10);
    */


    /*
    double num, soma, i;

    num = 0;
    i = 0;

    do{
        printf("Digite um numero: ");
        scanf("%lf", &num);
        soma += num;
        i ++;
    } while(i < 10);

    printf("%.2lf", soma);
    */


    /*
    double num, soma, i, neg;

    num = 0;
    i = 0;

    do{
        printf("Digite um numero: ");
        scanf("%lf", &num);
        if (num > 0){
            soma += num;
        } else {
            neg++;
        }
        i ++;
    } while(i < 15);

    printf("soma = %.2lf\n", soma);
    printf("negativos = %.0lf", neg);
    */



    /*
    double num, i,men,mar;

    num = 0;
    i = 0;
    men = 0;
    mar = 0;

    do{
        printf("Digite um numero: ");
        scanf("%lf", &num);
        if(i == 0){
            men = num;
        }

        if (num < men){
            men = num;
        }else if(num > mar){
            mar = num;
        }

        i ++;
    } while(i < 10);

    printf("menor = %.2lf\nMaior = %.2lf", men, mar);
    */


    /*
    int num,i,result;

    printf("Digite um numero: ");
    scanf("%d", &num);

    i = 0;

    do{
        result = num * i;
        printf("%d * %d = %d\n", num, i, result);
        i++;
    } while(i <= 10);
    */




    /*
    int i;
    double a, b, c, media;

    printf("Digite um numero: ");
    scanf("%d", &i);

    printf("Digite um numero: ");
    scanf("%lf", &a);
    printf("Digite um numero: ");
    scanf("%lf", &b);
    printf("Digite um numero: ");
    scanf("%lf", &c);



    if (i > 10){
        media = ((a*2)+(b*3)+(c*4))/9;
    } else if(i % 2 == 0){
        media = (a+b+c) / 3;-
    }-

    printf("%.2lf", media);
    */



    /*
    double base,h,result;

    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite a altura: ");
    scanf("%lf", &h);

    if (base == h){
        printf("QUADRADO");
    } else{
        result = base*2 + h*2;
        printf("perimetro = %.2lf", result);
    }
    */



    /*
    double num1,num2,result;
    int i;

    printf("Digite um numero: ");
    scanf("%lf", &num1);
    printf("Digite um numero: ");
    scanf("%lf", &num2);
    printf("1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    scanf("%d", &i);

    switch (i){
        case 1:{
            result = num1+num2;
            break;
        }
        case 2:{
            if (num1 >= num2){
                result = num1-num2;
            } else{
                result = num2-num1;
            }
            break;
        }
        case 3:{
            result = num1*num2;
            break;
        }
        case 4:{
            if (num2 == 0){
                printf("O divisor nao pode ser zero!");
            } else {
                result = num1 / num2;
            }
            break;
        }
        default:{
            printf("Opcao invalida!");
        }
    }

    printf("%.2lf", result);
    */



    int valor, chegada, partida,


    return 0;
}

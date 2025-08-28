#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Validador de Data


    /*
    int dataAtu, dia, mes, ano;

    printf("Digite o seu ano que deseja conferir(dd/mm/yyyy): ");
    scanf("%d", &dataAtu);

    dia = dataAtu / 1000000;
    mes = dataAtu / 10000 % 100;
    ano = dataAtu % 10000;

    printf("%d/%d/%d\n", dia, mes, ano);

    if (mes > 00 && mes <= 12){
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if (dia <= 31 && dia >0){
                printf("Ele eh valido!");
            } else{
                printf("Ele eh invalido!");
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if (dia <= 30 && dia >0){
                printf("Ele eh valido!");
            } else{
                printf("Ele eh invalido!");
            }
        } else {
            if (ano % 4 == 0 && ano % 100 != 0 || ano % 100 != 0 && ano % 400 == 0){
                if (dia <= 29 && dia >0){
                    printf("Ele eh valido!");
                } else {
                    printf("Ele eh invalido!");
                }
            }else{
                if (dia <= 28 && dia >0){
                    printf("Ele eh valido!");
                } else {
                    printf("Ele eh invalido!");
                }
            }
        }
    }
    */





    // Switch



    /*
    int num;

    printf("Digite um dia em numero: ");
    scanf("%d", &num);

    switch(num){
        case 1:{
            printf("Domingo");
            break;
            }
        case 2:{
            printf("Segunda");
            break;
            }
        case 3:{
            printf("Terca");
            break;
            }
        case 4:{
            printf("Quarta");
            break;
            }
        case 5:{
            printf("Quinta");
            break;
            }
        case 6:{
            printf("Sexta");
            break;
            }
        case 7:{
            printf("Sabado");
            break;
            }
        default:{
            printf("Opcao invalida");
            break;
            }

    }

    */



    /*
    char conceito;

    printf("Digite o conceito(A;B;C;D): ");
    scanf("%c", &conceito);

    switch(conceito){
        case 'A':{
                printf("Excelente");
                break;
                }
        case 'B':{
                printf("Bom");
                break;
                }
        case 'C':{
                printf("Regular");
                break;
                }
        case 'D':{
                printf("Reprovado");
                break;
                }
        default:{
                printf("Opcao invalida!");
                break;
                }

    }
    */


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
                printf("Resultado = %.2lf", num1 / num2);
                break;
                }
        default:{
                printf("Opcao invalida!");
                break;
                }
    }
    */







    return 0;
}

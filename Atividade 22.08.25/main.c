#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    /*

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Voce eh menor de idade");

    } else if(idade < 65){
        printf("Voce eh maior de idade");
    } else {
        printf("Voce tem 65+ anos");
    }


    */



    /*
    int codigo;
    double valor;


    printf("Digite o valor do produto: ");
    scanf("%lf", &valor);

    printf("Digite o codigo de pagamento: ");
    scanf("%d", &codigo);

    if (codigo == 1){
        printf("O valor do produto eh: %.2lf", valor-(valor*0.10));
    } else if (codigo == 2) {
        printf("O valor do produto eh: %.2lf", valor-(valor*0.15));
    } else if (codigo == 3) {
        printf("O valor do produto eh duas vezes de: %.2lf", valor/2);
    } else if (codigo == 4) {
        printf("O valor do produto eh duas vezes de: %.2lf", (valor+(valor*0.10))/2);
    }

    */


    /*
    double a,b,c,x1,x2,delta;

    printf("Digite o valor de A:");
    scanf("%lf", &a);
    printf("Digite o valor de B:");
    scanf("%lf", &b);
    printf("Digite o valor de C:");
    scanf("%lf", &c);

    delta = pow(b,2) - (4*a*c);

    if (delta > 0){
        x1 = (-b + sqrt(delta)) / (2*a);

        x2 = (-b - sqrt(delta)) / (2*a);

        printf("Os valores digitados possuem 2 raizes, de x1 = %.2lf e x2 = %.2lf", x1,x2);
    } else if(delta == 0){

        x1 = -b / (2*a);
        printf("Os valores digitados so possuem uma raiz, x1 = %.2lf", x1);

    } else if(delta <0){
        printf("Nao exitem raizes reais para os valores que digitou");
    }
    */



    /*
    int a,b,soma;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);

    if (a % 2 == 0 && b % 2 == 0){
        printf("Ambos sao pares!");
    } else if (a % 2 == 0){
        printf("So o primeiro numero eh par, o numero %d", a);
    } else if (b % 2 == 0){
        printf("So o segundo numero eh par, o numero %d", b);
    } else {
        printf("Nenhum numero eh par");
    }

    */


    /*
    double altura,peso;
    char sexo;


    printf("Digite o seu sexo (M|m ou N|n): ");
    scanf("%c", &sexo);

    printf("Digite a sua altura(Metros): ");
    scanf("%lf", &altura);

    if (sexo == 'm' || sexo == 'M'){
        peso = (72.7*altura)-58;
        printf("O seu peso ideal eh %.2lf", peso);
    } else if (sexo == 'f' || sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
        printf("O seu peso ideal eh %.2lf", peso);
    }
    */


    /*
    double peso, altura, imc;

    printf("Digite sua altura: ");
    scanf("%lf", &altura);
    printf("Digite seu peso: ");
    scanf("%lf", &peso);


    imc = peso/pow(altura,2);

    printf("%.2lf", imc);

    if (imc < 18.5){
        printf("O seu estado eh magreza");
    } else if(imc >= 18.5 && imc <= 24.9){
        printf("O seu estado eh peso normal");
    } else if(imc >= 25 && imc <= 29.9){
        printf("O seu estado eh sobrepeso");
    } else {
        printf("O seu estado eh obesidade");
    }
    */


    /*
    double a,b,c;
    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    if (a < b && b < c){
        printf("%lf,%lf,%lf", a, b, c);
    } else if (b < a && a < c){
        printf("%lf,%lf,%lf", b,a,c);
    } else if (c < b && b < a){
        printf("%lf,%lf,%lf", c,b,a);
    } else if (c < b && a < b){
        printf("%lf,%lf,%lf", c,a,b);
    } else if (a < b && c < b){
        printf("%lf,%lf,%lf", a,c,b);
    } else if (b < a && c < a){
        printf("%lf,%lf,%lf", b,c,a);
    }
    */



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









    return 0;
}


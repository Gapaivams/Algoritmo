#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*
    double num, mar, men;
    int i = 0;


    do{
        printf("Digite um valor: ");
        scanf("%lf", &num);
        if (num != 0){
            if (i == 0){
            mar = num;
            men = num;
            } else if(num < men){
            men = num;
            } else if(num > mar){
            mar = num;
            }
        }

        i++;

    } while (num != 0);

    printf("O menor numero eh: %.2lf\nO maior numero eh: %.2lf", men, mar);
    */







    /*
    for (int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }
    */



    /*
    for (int i = 1; i <= 20; i++){
        printf("%d\n", i*i);
    }
    */



    /*
    int i, n;

    printf("Digite um numero: ");
    scanf("%d", &n);


    for (i = 0; i <= n; i++){
        if (i % 3 == 0){
            printf("%d\n", i);
        }
    }
    */



    /*
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = num; i >= 0; i --){
        printf("%d\n", i);
    }
    */



    /*
    int soma = 0, min = 100, max = 200;

    for(min = 100; min <= max; min++){
        if (min % 7 == 0){
            soma += min;
        }
    }

    printf("%d", soma);
    */



    /*
    int senha;

    for (int i = 3; i >= 1; i--){
        printf("Digite a sua senha: ");
        scanf("%d", &senha);

        if (senha == 1786){
            printf("Bom dia! Seja bem vindo!!");
            break;
        } else {
            printf("Acesso Negado, voce possui mais %d tentativa(s)", i);
        }
    }
    */



    /*
    int i, a=1, b=1, c = 0, n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d\n%d\n", a, b);

    for(i = 0; c < n; i++){
        c = a + b;
        a = b;
        b = c;
        if (c < n){
            printf("%d\n", c);
        }
    }
    */



    /*
    int i = 1, idade, qntF = 0, qntM = 0;
    double peso, somaP = 0, somaI = 0;
    char sexo;

    while (i <= 10){
        printf("Digite o sexo: ");
        scanf(" %c", &sexo);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o peso: ");
        scanf("%lf", &peso);

        if (sexo == 'F' || sexo == 'f'){
            somaP += peso;
            qntF++;
        }else if(sexo == 'M' || sexo == 'm'){
            somaI += idade;
            qntM++;
        }
        i++;
    }

    printf("Total homem = %d\n", qntM);
    printf("Total mulher = %d\n", qntF);
    printf("Media peso = %.2lf\n", somaP/qntF);
    printf("Media idade = %.2lf\n", somaI/qntM);
    */



    /*
    int i = 1, num, soma = 0, mai, men;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(i == 1){
            mai = num;
            men = num;
        } else if(num > mai){
            mai = num;
        } else if(num < men){
            men = num;
        }

        soma += num;

        i++;
    } while(i <= 10);

    printf("Maior = %d\nMenor = %d\nMedia = %.2lf", mai, men, (double)soma/(i-1));
    */



    /*
    int base, expoente, i = 1, potencia;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    potencia = 1;

    while (i <= expoente){
        potencia *= base;
        i++;
    }

    printf("\n%d", potencia);
    */


    int codigo;
    double num1,num2;

    do{
        printf("Escolha uma opcao\n");
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
        scanf("%d", &codigo);

        if(codigo != 5){
            printf("Digite um numero: ");
            scanf("%lf", &num1);
            printf("Digite outro numero: ");
            scanf("%lf", &num2);
        }

        switch(codigo){
                case 1:{
                    printf("%.2lf\n", num1+num2);
                    break;
                }
                case 2:{
                    if(num1>num2){
                        printf("%.2lf\n", num1-num2);
                    } else{
                        printf("%.2lf\n", num2-num1);
                    }
                    break;
                }
                case 3:{
                    printf("%.2lf\n", num1*num2);
                    break;
                }
                case 4:{
                    if(num2 != 0){
                        printf("%.2lf\n", num1/num2);
                    }else{
                        printf("Divisor nao pode ser zero\n");
                    }
                    break;
                }
                case 5:{
                        printf("Saindo!");
                        break;
                    }
                default:{
                        printf("Opcao invalida\n");
                        break;
                    }
        }
    } while (codigo != 5);





    return 0;
}

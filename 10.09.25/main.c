#include <stdio.h>
#include <stdlib.h>

int main()
{

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
    printf("Soma peso = %.2lf\nMedia peso = %.2lf\n", somaP, somaP/qntF);
    printf("Soma idade = %.2lf\nMedia idade = %.2lf\n", somaI,somaI/qntM);
    */


    /*
    double idade10 = 0, idade20 = 0, idade30 = 0, idade31 = 0, qnt10 = 0,qnt20 = 0,qnt30 = 0,qnt31 = 0, peso = 0, idade = 0;

    for (int i = 1; i<=15; i++){
        printf("Digite a sua idade: ");
        scanf("%lf", &idade);
        printf("Digite o seu peso: ");
        scanf("%lf", &peso);

        if (idade <= 10){
            idade10 += peso;
            qnt10 ++;
        } else if (idade <= 20){
            idade20 += peso;
            qnt20 ++;
        } else if (idade <= 30){
            idade30 += peso;
            qnt30 ++;
        } else {
            idade31 += peso;
            qnt31 ++;
        }
    }

    printf("Media 1 a 10 = %.2lf", idade10/qnt10);
    printf("Media 11 a 20 = %.2lf", idade20/qnt20);
    printf("Media 21 a 30 = %.2lf", idade30/qnt30);
    printf("Media 31+ = %.2lf", idade31/qnt31);
    */



    /*
    int i = 1;
    double num, soma = 0, media;

    do {
        printf("Digite um numero: ");
        scanf("%lf", &num);

        if (num == -99){
            break;
        }

        soma += num;
        i++;
    } while (num != 0);

    media = soma/(i-1);
    printf("%.2lf", media);
    */



    /*
    int t = 0,b = 0,r = 0,total = 0, num, codigo;

    do{
        printf("Digite qual voce deseja adicionar:\n");
        printf("1 - Tinto\n2 - Branco\n3 - Rose\n4 = Fim\n");
        scanf("%d", &codigo);

        if(codigo != 4){
            printf("Quantos voce deseja adicionar: ");
            scanf("%d", &num);
        }

        switch(codigo){
            case 1:{
                t += num;
                break;
            }
            case 2:{
                b += num;
                break;
            }
            case 3:{
                r += num;
                break;
            }
            case 4:{
                printf("Saindo!!\n");
                break;
            }
            default:{
                printf("Codigo invalido!!");
                break;
            }
        }

    }while (codigo != 4);

    printf("\nTinto = %d\nBranco = %d\nRose = %d", t,b,r);
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






    return 0;
}

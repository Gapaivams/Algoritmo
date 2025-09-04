#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    /*
    double hrCh, hrPa, minCh, minPa, chegada, partida, perm, valor;

    printf("Digite a hora de chegada: ");
    scanf("%lf", &hrCh);
    printf("Digite o minuto de chegada: ");
    scanf("%lf", &minCh);
    printf("Digite a hora de partida: ");
    scanf("%lf", &hrPa);
    printf("Digite o minuto de partida: ");
    scanf("%lf", &minPa);

    chegada = hrCh * 60 + minCh;
    partida = hrPa * 60 + minPa;

    if (partida < chegada){
        partida += 24*60;
    }

    perm = abs((chegada - partida)/60);

    perm = ceil(perm);

    if (perm <= 2){
        valor = perm * 1;
    } else if(perm <= 4){
        valor = perm * 1.4;
    } else {
        valor = perm * 2;
    }

    printf("Valor a ser pago: R$%.2lf", valor);
    */




    /*
    int i = 0, n;

    printf("Digite um numero positivo que deseja contar ate: ");
    scanf("%d", &n);
    printf("\n");

    if (n < 0){
        printf("Digite um numero positivo");
    } else {
        while(i <= n){
            printf("%d\n", i);
            i++;
        }
    }
    */



    /*
    int n;

    printf("Digite um numero positivo que deseja contar apartir: ");
    scanf("%d", &n);
    printf("\n");

    if (n < 0){
        printf("Digite um numero positivo");
    } else {
        while(n >= 1){
            printf("%d\n", n);
            n--;
        }
    }
    */



    /*
    int i = 0, n;

    printf("Digite um numero positivo que deseja contar ate: ");
    scanf("%d", &n);
    printf("\n");

    if (n < 0){
        printf("Digite um numero positivo");
    } else {
        while(i < n){
            printf("%d\n", n);
            n--;
        }
    }
    */



    /*
    double n, i=1, soma = 0;

    while (i <= 5){
        printf("Digite o %.0lfº numero: ", i);
        scanf("%lf", &n);

        soma += n;
        i++;
    }

    printf("Soma = %.2lf", soma);
    */



    /*
    double n, i=1, soma=0;

    while (i <= 10){
        printf("Digite o %.0lfº numero: ", i);
        scanf("%lf", &n);

        soma += n;
        i++;
    }

    printf("Media = %.2lf", soma/(i-1));
    */



    /*
    int n, i=1, soma = 0;

    printf("Digite o numero que deseja somar ate: ");
    scanf("%d", &n);

    while(i <= n){
        soma += i;
        i++;
    }

    printf("Soma = %d", soma);
    */


    /*
    int i = 0;
    double n, media, soma = 0;

    printf("Digite um numero: ");
    scanf("%lf", &n);

    while (n!=0){
        soma += n;
        i++;
        printf("Digite um numero: ");
        scanf("%lf", &n);
    }

    media = (double)soma/i;

    printf("Media = %.2lf", media);
    */


    /*
    int n, fat=1;

    printf("Digite o numero que deseja fatoriar: ");
    scanf("%d", &n);

    if(n > 0){
        while(n >= 1){
        fat *= n;
        n--;

        }
        printf("Valor = %d", fat);
    } else {
        printf("Digite um valor positivo!!");
    }
    */


    /*
    int n, i = 1, num, somaP = 0, somaI = 0, numI = 0;
    double media;

    printf("Digite a quantidade de numeros que deseja inserir: ");
    scanf("%d", &n);

    while (i <= n){
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (num % 2 == 0){
            somaP += num;
        } else {
            somaI += num;
            numI ++;
        }

        i++;

    }

    printf("o valor da soma dos pares eh: %d\n", somaP);
    if(numI > 0){
        media = (double)somaI/numI;
        printf("O valor da media dos impares eh: %.2lf", media);
    }
    */


    /*
    int i = 1;


    do{
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    */


    /*
    int i = 1, n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    do{
        printf("%d * %d = %d\n", n,i,n*i);
        i++;
    } while (i <= 10);
    */



    double num, mar, men;
    int n, i = 0;

    printf("Digite a quantidade de numeros que deseja verificar: ");
    scanf("%d", &n);

    do{
        printf("Digite um valor: ");
        scanf("%lf", &num);
        if (i == 0){
            mar = num;
            men = num;
        } else if(num < men){
            men = num;
        } else if(num > mar){
            mar = num;
        }


        i++;

    } while (i < n);

    printf("O menor numero eh: %.2lf\nO maior numero eh: %.2lf", men, mar);



    return 0;
}

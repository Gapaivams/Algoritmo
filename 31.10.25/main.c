#include <stdio.h>
#include <stdlib.h>


void preencher(int l, int c ,int matriz[l][c], int indice){
    int valor = 1;

    if(indice == 1){
        for(int i = 0; i<l; i++){
            for(int j = 0;j<c;j++){
                matriz[i][j] = valor++;
            }
        }
    } else{
        for(int i = 0; i<l; i++){
            for(int j = 0;j<c;j++){
                matriz[i][j] = i+j;
            }
        }
    }
}






void imprimir_saudacao(char *nome){
    printf("\n\nOla, %s! Bem-vindo(a)!", nome);
}







int eh_par(int num){
    if(num%2 == 0){
        return 1;
    } else{
        return 0;
    }
}




int main()
{



    /*
    //Exercicio 1

    int matriz[3][3], indI, indJ;

    preencher(3,3,&matriz,1);

    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite um valor para o indice i: ");
    scanf("%d", &indI);
    printf("Digite um valor para o indice j: ");
    scanf("%d", &indJ);

    printf("[%d]", matriz[indI-1][indJ-1]);
    */




    /*

    //Exercicio 2


    int matriz[4][4], i, soma=0;

    preencher(4,4,&matriz,1);

    for(i=0;i<4;i++){
        soma += matriz[i][i];
    }


    printf("%d", soma);

    */





    /*

    //Exercicio 3


    int matrizA[2][3], matrizB[3][2], i, j;

    preencher(2, 3, &matrizA, 1);

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            matrizB[j][i] = matrizA[i][j];
        }
    }
    printf("\nMatriz A:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("[%d] ", matrizA[i][j]);
        }
        printf("\n");
    }


    printf("\nMatriz B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("[%d] ", matrizB[i][j]);
        }

        printf("\n");
    }

    */






    /*

    //Exercicio 4


    char nome[50];

    printf("Digite o seu nome: \n");
    scanf("%49s", nome);

    imprimir_saudacao(&nome);
    */





    /*

    //Exercicio 5


    int num, booleano;

    printf("Digite um valor: ");
    if(scanf("%d", &num) != 1){
        printf("Numero invalido!!");
        return 1;
    }

    booleano = eh_par(num);

    if(booleano == 1){
        printf("O numero eh par!!!");
    } else {
        printf("O numero eh impar!!!");
    }
    */





    return 0;
}

#include <stdio.h>
#include <stdlib.h>


int dobrar_valores(int v[], int tam){
        for(int i=0;i<tam;i++){
            v[i] = v[i]*2;
        }
    }


int main()
{
    /* Exercicio 1
    int vetor[8], i;

    for(i=0;i<8;i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(i=0;i<8;i++){
        printf("%d\n", vetor[i]);
    }
    */



    /*  Exercicio 2
    double notas[5], soma=0, media=0;
    int i;


    for(i=0;i<5;i++){
        printf("Digite o valor da %d nota: ", i+1);
        scanf("%lf", &notas[i]);
        notas[i] *= i+1;
        soma += notas[i];
    }

    media = soma/15;

    printf("O valor da media ponderada foi de: %.2lf", media);
    */



    /* Exercicio 3
    int matriz[3][3], i, j;

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor da casa %d,%d: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }



    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i == j){
                printf("%d", matriz[i][j]);
            } else{
                printf("   ");
            }
        }
        printf("\n");
    }
    */



    /* Exercicio 4
    int matriz[4][5], i,j;

    for (i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Digite o valor da casa %d,%d: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(i==2){
                printf("[%d]  ", matriz[i][j]);
            }else {
                printf("   ");
            }
        }
        printf("\n");
    }
    */




    /* Exercicio 5
    char frase[50];
    int i, vogais=0;

    printf("Digite uma frase:\n");
    scanf("%49[^\n]", frase);

    for(i=0;i<50;i++){
        if(frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U'){
            vogais++;
        }
    }

    printf("A frase possui %d vogais", vogais);
    */



    /* Exercicio 6
    int matriz[5][5], i, j, maiores=0;

    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite o valor da casa %d,%d: ", i,j);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > 10){
                maiores++;
            }
        }
    }

    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("A quantidade de valores maior que 10 foi de: %d", maiores);
    */





    /* Exercicio 7
    int vetorA[6], vetorB[6], a, b, vetorC[12], c=0;

    for(a=0;a<6;a++){
        printf("Digite o valor da casa %d do vetorA: ", a);
        scanf("%d", &vetorA[a]);
    }
    for(b=0;b<6;b++){
        printf("Digite o valor da casa %d do vetorB: ", b);
        scanf("%d", &vetorB[b]);
    }


    for(a=0;a<6;a++){
        vetorC[c++] = vetorA[a];
        vetorC[c++] = vetorB[a];
    }

    for(a=0;a<12;a++){
        printf("%d\n", vetorC[a]);
    }
    */




    /* Exercicio 8
    char matriz[5][20];
    int i, j;

    for(i=0;i<5;i++){
        printf("Digite o %d nome: ", i+1);
        scanf(" %19[^\n]", &matriz[i]);
    }

    printf("\n\n");
    printf("Nomes:");

    for(i=0;i<5;i++){
        printf("%s\n", matriz[i]);
    }
    */




    int vetor[5], i;

    for(i=0;i<5;i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    dobrar_valores(vetor, 5);

    for(i=0;i<5;i++){
        printf("%d\n", vetor[i]);
    }








    return 0;
}

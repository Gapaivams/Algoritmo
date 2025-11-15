#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>




float calcular_total_itens(int *itens, int dias){
    int soma = 0;
    for (int i = 0; i<dias; i++){
        soma += itens[i];
    }

    return soma;
}



int main()
{

    int n, item, calculo, dias = 7;
    int **itens = NULL;



    printf("Digite quantos itens a loja tem: ");
    scanf("%d", &n);



    itens = (int**)malloc(n * sizeof(int*));

    for(int i=0; i<n; i++){
        itens[i] = (int *) malloc(dias * sizeof(int));
    }


    for (int i = 0; i<n; i++){
        for (int j = 0; j<7; j++){
            printf("\nDigite a quantia vendida do item %d no dia %d: ", i+1, j+1);
            scanf("%d", &*(*(itens+i)+j));
        }
        printf("\n");
    }

    printf("Digite um item para somar as vendas: ");
    scanf("%d", &item);

    calculo = calcular_total_itens(*(itens + (item - 1)), dias);

    printf("\n%d\n", calculo);





    free(itens);




    return 0;
}

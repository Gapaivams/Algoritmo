#include <stdio.h>
#include <stdlib.h>

//em um projeto de desenvolvimneto de um software para controle de inventario.
//Voce precisa criar uma função que calcule a soma dos preços de um lote de itens
//Para garantir eficiencia, voce deve implementar uma logica utilizando
//aritimetica de ponteiros.

//1- crie a funçao somar_elementos que receba:
// A) um ponteiro para inicio de um vetor(array)-----------(int*array ou int* vetor)

// B) O numero de elementos do vetor (int tamanho)

// a função deve percorrer o vetor elemento por elemento usando a notação *(ponteiro + deslocamento)



/*
void calcula(int *c){
    printf("calcula %d %d\n", c, &c);
    (*c)++;
    printf("calcula %d %p\n", (*c), &c);
}
*/


int somar_elementos(int *vetor, int tamanho){
    float soma;
    for(int i=0; i<tamanho; i++){
        soma += *(vetor+i);
    }
    return soma;
}




int main()
{

    /*
    int c=10;

    printf("%d %p\n", c, &c);

    calcula(&c);

    printf("%d %p\n", c, &c);
    */


    int vetor[5], i;

    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    for(i=0;i<5;i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);

    }

    float total = somar_elementos(vetor, tamanho);

    printf("%.2lf", total);












    return 0;
}

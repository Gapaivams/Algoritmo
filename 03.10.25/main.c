#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Vetores e Registros
    */

    /*
    programa que colete quantos alunos tem na sala e insira a sua nota final

    deixe o usuario digitar o parametro das notas, pesos;
    */


    int qnt=0, pesoP, pesoT, verificadorErro=0, notaMax;
    double soma = 0, resumo[3];
    char validacao;

    printf("Digite quantos alunos tem na sala: ");
    scanf("%d", &qnt);

    double notasP[qnt], notasT[qnt], medias[qnt];

    printf("Digite o padrao de notas: ");
    scanf("%d", &notaMax);

    printf("Digite o peso que a prova vai ter: ");
    scanf("%d", &pesoP);
    printf("Digite o peso que o trabalho vai ter: ");
    scanf("%d", &pesoT);

    for(int i=0; i < qnt; i++){

        do{
            printf("\nDigite a nota da prova aluno %d: ", i+1);
            scanf("%lf", &notasP[i]);

            if(notasP[i]>=0 && notasP[i]<=notaMax){
                printf("Voce tem certeza que a nota %.2lf eh a nota correta?\n", notasP[i]);
                scanf(" %c", &validacao);
                if(validacao == 's'||validacao == 'S'){
                    verificadorErro = 0;

                } else if(validacao == 'n'||validacao == 'N'){
                    verificadorErro = 1;
                }
            }else {
                printf("\nnota invalida, digite novamente!!\n");
                verificadorErro = 1;
            }
        }while(verificadorErro == 1);

        do{
            printf("\nDigite a nota do trabalho do aluno %d: ", i+1);
            scanf("%lf", &notasT[i]);


            if(notasT[i]>=0 && notasT[i]<=notaMax){
                printf("Voce tem certeza que a nota %.2lf eh a nota correta?\n", notasT[i]);
                scanf(" %c", &validacao);
                if(validacao == 's'||validacao == 'S'){
                    verificadorErro = 0;
                } else if(validacao == 'n'||validacao == 'N'){
                    verificadorErro = 1;
                }
            }else {
                printf("\nnota invalida, digite novamente!!\n");
                verificadorErro = 1;
            }
        }while(verificadorErro == 1);

        medias[i] = (notasP[i]*pesoP + notasT[i]*pesoT)/(pesoP+pesoT);

        soma += medias[i];

        if(i == 0){
            resumo[0] = medias[i];
            resumo[1] = medias[i];
        }else if(medias[i] <= resumo[0]){
            resumo[0] = medias[i];
        }else if(medias[i] >= resumo[1]){
            resumo[1] = medias[i];
        }
    }

    printf("\nResultado:\n");
    for(int i=0; i<qnt; i++){
        printf("Nota do aluno %d: %.2lf\n", i, medias[i]);
    }


    resumo[2] = soma/qnt;


    printf("\nA media das notas do aluno dessa sala eh: %.2lf\nA menor nota foi: %.2lf\nA maior nota foi: %.2lf\n", resumo[2], resumo[0], resumo[1]);













    return 0;
}

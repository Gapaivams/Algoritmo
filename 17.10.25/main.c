#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Matrizes*/

    /*
    int linha,coluna,i,j;

    printf("Digite o numero de colunas: ");
    scanf("%d", &coluna);
    printf("Digite o numero de linhas: ");
    scanf("%d", &linha);

    int matriz[linha][coluna];

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(i==j){
                printf("[%d,%d] ",i,j);
            } else{
                printf("      ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(i + j == coluna - 1){
                printf("[%d,%d] ", i,j);
            } else{
                printf("      ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("[%d,%d] ",i,j);
        }
        printf("\n");
    }
    */


    int turmas, qntnotas,i,j,codigo,cTurma;


    printf("Digite quantas turmas deseja inserir: ");
    scanf("%d", &turmas);
    printf("Digite quantas notas deseja inserir: ");
    scanf("%d", &qntnotas);

    double notas[qntnotas][turmas];
    double medias[turmas];

    for(j=0;j<turmas;j++){
        double soma=0;
        for(i=0;i<qntnotas;i++){
            printf("Digite a nota do aluno %d da turma %d: ", i+1,j+1);
            scanf("%lf", &notas[i][j]);
            soma += notas[i][j];
        }
        medias[j]=soma/qntnotas;
    }

    do{
        printf("\nO que deseja fazer:\n1 - Vizualizar notas\n2 - vizualizar media\n3 - Sair\n");
        scanf("%d", &codigo);


        switch(codigo){
            case 1:{
                printf("\nDigite qual turma deseja vizualizar a nota: ");
                scanf("%d", &cTurma);

                if(cTurma <= turmas && cTurma != 0){
                    for(i=0;i<qntnotas;i++){
                        printf("A nota do aluno %d foi de %.2lf\n", i+1, notas[i][cTurma-1]);
                    }
                } else{
                    printf("Turma inexistente!\n");
                }

                break;
            }
            case 2:{
                printf("\nDigite qual turma deseja vizualizar a media: ");
                scanf("%d", &cTurma);

                if(cTurma <= turmas && cTurma != 0){
                    printf("A media da turma %d foi de %.2lf\n", cTurma, medias[cTurma-1]);
                } else{
                    printf("Turma inexistente!\n");
                }

                break;
            }
            case 3:{
                printf("Saindo...");
                break;
            }
            default:{
                printf("Opcao invalida!!");
                break;
            }
        }
    } while(codigo != 3);




















    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    char caract[20];
    int i=0;


    printf("Digite uma palavra: \n");

    while(i <= 19){
        scanf("%c", &caract[i]);
        if(caract[i] == '\n'){
            break;
        }
        i++;
    }

    caract[i] = '\0';

    printf("\n");

    printf("%s", caract);

    printf("\n\n");

    for(i=0;i<19 && caract[i] != '\0';i++){
        printf("[%d] - ", i+1);
        printf("%c\n", caract[i]);
    }
    */



    int i, alunos, ver = 0, adic, total_alunos;
    double media, soma;
    char carac;

    printf("Digite quantos alunos possuem na sala: ");
    scanf("%d", &alunos);
    total_alunos = alunos;

    double *notas = malloc(alunos*sizeof(double));

    while(ver != 1){
        if(ver != 2){
            for(i = total_alunos - alunos; i < total_alunos;i++){
                printf("Digite a nota do aluno %d: ",i+1);
                scanf("%lf", &notas[i]);
                soma += notas[i];
            }
        }

        printf("\nDeseja adicionar mais alunos? ");
        scanf(" %c", &carac);
        if(carac == 's' || carac == 'S'){
            printf("\nQuantos alunos deseja adicionar?: ");
            scanf("%d", &adic);
            total_alunos += adic;
            notas = realloc(notas, total_alunos * sizeof(double));
            alunos = adic;
            ver = 0;
        } else if(carac == 'n' || carac == 'N'){
            printf("Calculando a media...\n");
            ver = 1;
        } else{
            printf("Opcao invalida\n");
            ver = 2;
        }
    }



    media = soma/total_alunos;

    printf("media turma: %.2lf\n\n",media);

    for(i=0;i<total_alunos;i++){
        printf("%.2lf\n", notas[i]);
    }





    return 0;
}

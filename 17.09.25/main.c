#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    int codigo;

    printf("Selecione um item: \n");
    printf("1 - Alimento nao perecivel\n2 - Alimento perecivel\n3 - Vestuario\n4 - Limpeza\n");
    scanf("%d", &codigo);



    switch(codigo){
        case 1:{
            printf("Alimento Nao Perecivel");
            break;
        }
        case 2:{
            printf("Alimento Perecivel");
            break;
        }
        case 3:{
            printf("Vestuario");
            break;
        }
        case 4:{
            printf("Limpeza");
            break;
        }
        default:{
            printf("Opcao invalida");
            break;
        }
    }
    */



    /*
    double nota1, nota2, nota3, exerc, media;
    int ra;
    char conc;

    printf("Digite seu RA: ");
    scanf("%d", &ra);

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);
    printf("Digite a media dos exercicios: ");
    scanf("%lf", &exerc);

    media = (nota1 + nota2*2 + nota3*3 + exerc)/7;

    if (media >= 90){
        conc = 'A';
    } else if (media >= 75 && media < 90){
        conc = 'B';
    } else if (media >= 60 && media < 75){
        conc = 'C';
    } else if (media >= 40 && media < 60){
        conc = 'D';
    } else {
        conc = 'E';
    }

    printf("RA: %d\nNota 1: %.2lf\nNota 2: %.2lf\nNota 3: %.2lf\nMedia Exercicios: %.2lf\nMedia Final: %.2lf\nConceito: %c", ra,nota1,nota2,nota3,exerc,media,conc);


    if (conc == 'A' || conc == 'B' || conc == 'C'){
        printf("Aprovado!!");
    } else {
        printf("Reprovado!!");
    }
    */



    /*
    int codigo;
    int n=0,b=0,c1=0,c2=0,c3=0,c4=0;

    do{
        printf("Selecione o candidato em que deseja votar:\n");
        printf("\n1 - Candidato 1\n2 - Candidato 2\n3 - Candidato 3\n4 - Candidato 4\n5 - Voto nulo\n6 - Voto branco\n0 - Finalizar\n");
        scanf("%d", &codigo);

        switch(codigo){
            case 1:{
                c1++;
                break;
            }
            case 2:{
                c2++;
                break;
            }
            case 3:{
                c3++;
                break;
            }
            case 4:{
                c4++;
                break;
            }
            case 5:{
                n++;
                break;
            }
            case 6:{
                b++;
                break;
            }
            case 0:{
                printf("Finalizando!!\n");
                break;
            }
            default:{
                printf("Codigo inexistente\n");
                break;
            }
        }
    } while (codigo != 0);


    printf("Candidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nCandidato 4: %d\nNulo: %d\nBranco: %d", c1,c2,c3,c4,n,b);
    */




    int valor, nt50=0, nt10=0, nt5=0, nt1=0;

    printf("Digite o valor que deseja retirar: ");
    scanf("%d", &valor);

    while(valor > 0){
        if (valor >= 50){
            nt50++;
            valor -= 50;
        } else if(valor >= 10){
            nt10++;
            valor -= 10;
        } else if (valor >= 5){
            nt5++;
            valor -= 5;
        } else if (valor >= 1){
            nt1++;
            valor -= 1;
        }
    }

    printf("Notas a serem entregues:\nB$50,00: %d\nB$10,00: %d\nB$5,00: %d\nB$1,00: %d\n", nt50,nt10,nt5,nt1);






    return 0;
}

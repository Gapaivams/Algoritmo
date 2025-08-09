#include <stdio.h>
int main()
{
    /*
    double pi, num, area, peri;

    printf("Digite o raio de um circulo: ");
    scanf("%lf", &num);
    pi = 3.14159;

    area = pi*(num*num);
    peri = 2*pi*num;

    printf("O valor da area do circulo eh: %.2lf\n", area);
    printf("O valor do perimetro do circulo eh: %.2lf", peri);
    */

    /*
    int idade, dias;

    printf("Digite a sua idade em anos: ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("A quantidade de dias que voce viveu eh: %d dias", dias);
    */

    /*
    double num, porcentagem;

    printf("Digite o valor que deseja descobrir 4 porcento: ");
    scanf("%lf", &num);

    porcentagem = num * 0.04;

    printf("o valor de 4 porcento de %.2lf eh %.2lf", num, porcentagem);
    */

    /*
    double nota1, nota2, nota3, media;
    printf("Digite a sua primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a sua terceira nota: ");
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A sua media eh: %.2lf", media);
    */

    /*
    double nota1, nota2, nota3, media;
    printf("Digite a sua primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a sua terceira nota: ");
    scanf("%lf", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2+3+5);

    printf("A sua media eh: %.2lf", media);
    */

    /*
    double distancia, tempo, velo;

    printf("Digite a distancia que percorreu(km): ");
    scanf("%lf", &distancia);
    printf("Digite o tempo que percorreu(H): ");
    scanf("%lf", &tempo);

    velo = distancia/tempo;

    printf("A sua velocidade media nesse percurso foi: %.2lf km/h", velo);
    */

    /*
    double valorFabrica, valorDistri, valorImpos, valorFinal;
    printf("Digite o valor de fabrica do veiculo: ");
    scanf("%lf", &valorFabrica);

    valorDistri = valorFabrica * 0.28;
    valorImpos = valorFabrica * 0.45;

    valorFinal = valorFabrica + valorDistri + valorImpos;

    printf("O valor final do carro eh R$%.2lf", valorFinal);
    */




    /*
    int num, dez;
    printf("Digite um numero inteiro com 3 casas: ");
    scanf("%d", &num);

    dez = (num/10)%10;

    printf("%d", dez);
    */

    int data, dia, mes, ano, num;

    printf("Digite uma data: ");
    scanf("%d", &data);

    ano = data % 100;

    mes = (data/=100)%10;

    dia = data/100;

    printf("%d/%d/%d", dia, mes, ano);

    return 0;


}

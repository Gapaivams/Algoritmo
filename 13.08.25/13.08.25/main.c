#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    double angulo, angulo_rad, sen, cosseno, tangente, pi;

    printf("Informe o valor do angulo: ");
    scanf("%lf", &angulo);

    pi = 3.14;

    angulo_rad = angulo * pi / 180.0;
    sen = sin(angulo_rad);
    cosseno = cos(angulo_rad);
    tangente = tan(angulo_rad);

    printf("Seno = %.2lf\nCosseno = %.2lf\nTangente = %.2lf\n", sen, cosseno, tangente);
    */



    /*
    double num, sqr;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    sqr = sqrt(num);

    printf("A raiz quadrada de %.2lf = %.2lf\n", num, sqr);
    */



    /*
    double x,y,z;

    printf("Digite um numero base: ");
    scanf("%lf", &x);
    printf("Digite um numero expoente: ");
    scanf("%lf", &y);

    z = pow(x,y);

    printf("%.2lf elevado a %.2lf eh igual a %.2lf\n", x, y , z);
    */



    /*
    double num, chao, teto, arr;

    printf("Digite um numero com decimal: ");
    scanf("%lf", &num);

    chao = floor(num);
    teto = ceil(num);
    arr = round(num);

    printf("O numero %.2lf:\nArredondado para cima = %.2lf\nArredondado para baixo = %.2lf\nArredondado proximo = %.2lf\n", num, teto, chao, arr);
    */



    /*
    double num, abs;

    printf("Digite um numero negativo: ");
    scanf("%lf", &num);

    abs = fabs(num);

    printf("O numero absoluto de %.2lf eh %.2lf", num, abs);
    */



    /*
    double num, quad, cub;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    quad = pow(num, 2);
    cub = pow(num, 3);

    printf("O quadrado de %.2lf eh %.2lf\n", num, quad);
    printf("O cubo de %.2lf eh %.2lf\n", num, cub);
    */



    /*
    double num1, num2, mult, sqr;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    mult = num1 * num2;

    sqr = sqrt(mult);

    printf("A raiz quadrada da multiplicacao de %.2lf por %.2lf eh igual a %.2lf", num1, num2, sqr);
    */



    /*
    int term, pa, n, valor;

    printf("Digite o primeiro termo: ");
    scanf("%d", &term);
    printf("Digite a posicao do termo que deseja: ");
    scanf("%d", &n);
    printf("Digite a razao da progressao: ");
    scanf("%d", &pa);

    valor = term + (n - 1) * pa;

    printf("O numero nessa posicao dessa progrecao aritmetica eh %d\n", valor);
    */



    /*
    double x1,x2,y1,y2, dist;

    printf("Digite o valor de x1: ");
    scanf("%lf", &x1);
    printf("Digite o valor de y1: ");
    scanf("%lf", &y1);
    printf("Digite o valor de x2: ");
    scanf("%lf", &x2);
    printf("Digite o valor de y2: ");
    scanf("%lf", &y2);

    dist = sqrt((pow(x2-x1,2))+ (pow(y2-y1,2)));

    printf("A distancia do ponto %.2lf,%.2lf para %.2lf,%.2lf eh %.2lf", x1,y1,x2,y2,dist);
    */



    /*
    int a,b,c,r,s;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    r = pow((a+b), 2);
    s = pow((b+c), 2);

    printf("O valor de r = %d\nO valor de s = %d", r,s);
    */


    /*
    double salar, novoSalar;

    printf("Digite o salario atual: ");
    scanf("%lf", &salar);

    novoSalar = salar + (salar * 0.25);

    printf("O novo salario eh %.2lf", novoSalar);
    */


    /*
    double salar, novoSalar, valorReaj;

    printf("Digite o salario atual: ");
    scanf("%lf", &salar);

    valorReaj = salar * 0.25;

    novoSalar = salar + valorReaj;

    printf("O novo salario eh %.2lf\nO valor do reajuste foi de %.2lf", novoSalar, valorReaj);
    */


    /*
    int dataNasc, dataAtu, diaNasc, mesNasc, anoNasc, diaAtu, mesAtu, anoAtu, dia, mes, ano, diaIda, mesIda, anoIda;

    printf("Digite o seu ano de nascimento(dd/mm/yyyy): ");
    scanf("%d", &dataNasc);
    printf("Digite o ano atual(dd/mm/yyyy): ");
    scanf("%d", &dataAtu);

    diaNasc = dataNasc / 1000000;
    mesNasc = dataNasc / 10000 % 100;
    anoNasc = dataNasc % 10000;

    diaAtu = dataAtu / 1000000;
    mesAtu = dataAtu / 10000 % 100;
    anoAtu = dataAtu % 10000;

    dia = diaAtu - diaNasc;
    mes = mesAtu - mesNasc;
    ano = anoAtu - anoNasc;

    diaIda = dia + mes*30 + ano * 365;
    mesIda = dia/30 + mes + ano * 12;
    anoIda = dia/365 + mes / 12 + ano;

    printf("A idade em dias eh %d\nA idade em meses eh %d\nA idade em anos eh %d", diaIda, mesIda, anoIda);
    */


    /*
    int a, b, temp;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Valor original: a=%d, b=%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Valor apos a troca: a=%d, b=%d\n", a, b);
    */


    /*
    double real, dolar, cambio;

    printf("Digite o valor em R$ que deseja converter: ");
    scanf("%lf", &real);
    printf("Digite o valor do cambio: ");
    scanf("%lf", &cambio);

    dolar = real * cambio;

    printf("O valor R$%.2lf em dolar (cambio de %.2lf) eh U$%.2lf", real, cambio, dolar);
    */



    double rac, gat1, gat2, dias, resto;

    printf("Informe a quantidade total de racao que tem(KG): ");
    scanf("%lf", &rac);
    rac = rac * 1000;
    printf("Informe a quantidade total de racao para o gato 1(g): ");
    scanf("%lf", &gat1);
    printf("Informe a quantidade total de racao para o gato 2(g): ");
    scanf("%lf", &gat2);

    dias = 5;

    gat1 *= dias;
    gat2 *= dias;

    resto = (rac - (gat1 + gat2))/1000;

    printf("O gato 1 comeu %.2lfg em 5 dias\nO gato 2 comeu %.2lfg em 5 dias\nSobraram %.2lfKg de racao",gat1, gat2, resto);

    return 0;
}

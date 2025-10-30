#include <stdio.h>

#include <string.h> //Para podermos usar 'strlen', ou manipular string no geral


//Primeira critica: Flata de modularização, há repetição do calculo de salario liquido, ferias e verificação de regra de negocio
//Segunda critica: Validação da regra do nome nao é tao robusta, apenas joao seria valido, sem identificação mais robusta
//Terceira critica: Nao há valor de dias de ferias para caso o funcionario tenha trabalhado mais que 12 meses, os meses a mais nao sao contabilizados
//Quarta critica: Preenchimento feito inteiramente no codigo, sem facilidade para o ususario
//Quinta: Alocação de casas dos valores irregulares e desnecessarias


//Prototipos de funçoes:

void calculoSalaL(float sal_base, float desc, float *sal_l);
void calculoFerias(float m_trab, float *fer);
void holerite(char nome[], float sal_b, float sal_l, float fer);
int validar_nome(char nome[]);






int main() {

    //======== Func-1 ==================
    char nome[50] = "Maria Oliveira";
    float salario_base = 5000.00;
    float total_descontos = 1200.00;
    float meses_trabalhados = 8.5;
    float salario_liquido;
    float dias_ferias;



    printf("Iniciando processamento do holerite (Versão Monolítica)...\n");

    if(validar_nome(nome) == 1){
        calculoSalaL(salario_base, total_descontos, &salario_liquido);
        calculoFerias(meses_trabalhados, &dias_ferias);
        holerite(nome, salario_base, salario_liquido, dias_ferias);
    } else{
        printf("Erro");
    }

    return 0;




}


//Implementação dos modulos
void calculoSalaL(float sal_base, float desc, float *sal_l){
    *sal_l = sal_base - desc;


    //Garantir que o salario liquido nao seja negativo
    if (*sal_l < 0) {

      *sal_l = 0.0;

    }

}

void calculoFerias(float m_trab, float *fer){
    if (m_trab < 12.0) {

      *fer = (m_trab / 12.0) * 30.0;

    } else {

      *fer = 30.0;

    }
}


void holerite(char nome[], float sal_b, float sal_l, float fer){
    printf("\n==========================================");

    printf("\n| HOLERITE - %s", nome);

    printf("\n==========================================");

    printf("\n| Salário Bruto: R$ %10.2f   |", sal_b);

    printf("\n| Salário Líquido: R$ %10.2f   |", sal_l);

    printf("\n| Férias Acumuladas: %10.1f dias |", fer);

    printf("\n==========================================\n");

}

int validar_nome(char nome[]){
    if(strlen(nome) > 10){
        return 1;
    } else{
        return 0;
    }

}


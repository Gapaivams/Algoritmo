#include <stdio.h>

#include <string.h> //Para podermos usar 'strlen', ou manipular string no geral


//Primeira critica: Flata de modularização, há repetição do calculo de salario liquido, ferias e verificação de regra de negocio
//Segunda critica: Validação da regra do nome nao é tao robusta, apenas joao seria valido, sem identificação mais robusta
//Terceira critica: Nao há valor de dias de ferias para caso o funcionario tenha trabalhado mais que 12 meses, os meses a mais nao sao contabilizados
//Quarta critica: Preenchimento feito inteiramente no codigo, sem facilidade para o ususario
//Quinta: Alocação de casas dos valores irregulares e desnecessarias





int main() {



  // Variáveis do Funcionário 1

  char nome_1[50] = "Maria Oliveira";
  float salario_base_1 = 5000.00;
  float total_descontos_1 = 1200.00;
  float meses_trabalhados_1 = 8.5;



  float salario_liquido_1;
  float dias_ferias_1;



  printf("Iniciando processamento do holerite (Versão Monolítica)...\n");



  // ==========================================================

  // INÍCIO DO PROCESSAMENTO DO FUNCIONÁRIO 1

  // ==========================================================



  // 1. Lógica de Validação (Desafio Extra) - Lógica de negócio aqui

  if (strlen(nome_1) > 3) {



    // 2. Lógica de CÁLCULO DE SALÁRIO LÍQUIDO - Lógica de negócio aqui

    salario_liquido_1 = salario_base_1 - total_descontos_1;

    if (salario_liquido_1 < 0) {

      salario_liquido_1 = 0.0;

    }



    // 3. Lógica de CÁLCULO DE FÉRIAS - Lógica de negócio aqui

    if (meses_trabalhados_1 < 12.0) {

      dias_ferias_1 = (meses_trabalhados_1 / 12.0) * 30.0;

    } else {

      dias_ferias_1 = 30.0;

    }



    // 4. Lógica de EXIBIÇÃO (Holerite) - Lógica de I/O aqui

    printf("\n==========================================");

    printf("\n| HOLERITE - %s", nome_1);

    printf("\n==========================================");

    printf("\n| Salário Bruto: R$ %19.2f   |", salario_base_1);

    printf("\n| Salário Líquido: R$ %17.2f   |", salario_liquido_1);

    printf("\n| Férias Acumuladas: %15.1f dias |", dias_ferias_1);

    printf("\n==========================================\n");



  } else {

    printf("ERRO: Nome do funcionário 1 é inválido.\n");

  }



  // ==========================================================

  // INÍCIO DO PROCESSAMENTO DO FUNCIONÁRIO 2

  // ==========================================================



  // Variáveis do Funcionário 2

  char nome_2[50] = "João G.";
  float salario_base_2 = 3000.00;
  float total_descontos_2 = 500.00;
  float meses_trabalhados_2 = 14.0;



  float salario_liquido_2;
  float dias_ferias_2;



  // 1. Lógica de Validação - Lógica de negócio

  if (strlen(nome_2) > 3) {



    // 2. Lógica de CÁLCULO DE SALÁRIO LÍQUIDO - Lógica de negócio

    salario_liquido_2 = salario_base_2 - total_descontos_2;

    if (salario_liquido_2 < 0) {

      salario_liquido_2 = 0.0;

    }



    // 3. Lógica de CÁLCULO DE FÉRIAS - Lógica de negócio

    if (meses_trabalhados_2 < 12.0) {

      dias_ferias_2 = (meses_trabalhados_2 / 12.0) * 30.0;

    } else {

      dias_ferias_2 = 30.0;

    }



    // 4. Lógica de EXIBIÇÃO (Holerite) - Lógica de I/O

    printf("\n==========================================");

    printf("\n| HOLERITE - %s", nome_2);

    printf("\n==========================================");

    printf("\n| Salário Bruto: R$ %19.2f   |", salario_base_2);

    printf("\n| Salário Líquido: R$ %17.2f   |", salario_liquido_2);

    printf("\n| Férias Acumuladas: %15.1f dias |", dias_ferias_2);

    printf("\n==========================================\n");



  } else {

    printf("ERRO: Nome do funcionário 2 é inválido.\n"); // Exibirá esta mensagem

  }



  return 0;

}


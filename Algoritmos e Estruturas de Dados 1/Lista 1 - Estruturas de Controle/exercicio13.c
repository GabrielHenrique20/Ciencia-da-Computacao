#include <stdio.h>

// o salario fixo mais 4% da comissao de vendas

int main(void) {
  float salario = 0.00;
  float vendas = 0.00;
  float comissao = 0.00;
  float salarioFinal = 0.00;

  printf("Digite o salario do funcionario:  \n");
  scanf("%f", &salario);

  printf("Digite quanto em dinheiro o funcionario arrecadou em vendas no mes:  "
         "\n");
  scanf("%f", &vendas);

  comissao = (vendas * 0.04);
  salarioFinal = salario + comissao;

  printf("O valor da comissao eh:  %.2f\n", comissao);
  printf("O salario final do funcionario eh:  %.2f\n", salarioFinal);

  return 0;
}
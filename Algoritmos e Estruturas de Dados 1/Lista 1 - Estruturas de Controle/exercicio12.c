#include <stdio.h>

int main(void) {
  float salario = 0;
  float percentual = 0;
  float novoSalario = 0;
  float aumento = 0;

  printf("Digite o salario do funcionario em reais:  \n");
  scanf("%f", &salario);

  printf("Digite o percentual de aumento:  \n");
  scanf("%f", &percentual);

  aumento = salario * (percentual / 100);
  novoSalario = salario + aumento;

  printf("O aumento do salario eh:  %.2f\n", aumento);
  printf("O novo salario do funcionario com aumento eh:  %.2f\n", novoSalario);

  return 0;
}
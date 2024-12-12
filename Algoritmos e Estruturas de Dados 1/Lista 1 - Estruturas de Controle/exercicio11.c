#include <stdio.h>

int main(void) {
  float salario = 0;
  double novoSalario = 0;

  printf("Digite o salario do fuincionario em reais:  \n");
  scanf("%f", &salario);

  novoSalario = 1.25 * salario;

  printf("O novo salario do funcionario com aumento eh:  %2.2lf\n",
         novoSalario);

  return 0;
}
#include <stdio.h>

int main(void) {
  float salario = 0.00;
  float salario_novo = 0.00;

  printf("Digite quanto eh seu salario:  \n");
  scanf("%f", &salario);

  if (salario < 700) {
    salario_novo = salario * 1.30;
    printf("\nNOVO SALARIO EH:  %.2f\n", salario_novo);
  }

  else if (salario >= 700) {
    salario_novo = salario * 1.10;
    printf("\nNOVO SALARIO EH: %.2f", salario_novo);
  }

  return 0;
}
#include <stdio.h>

int main(void) {
  int codigo = 0;
  float salario_atual = 0.0;
  float salario_aumentado = 0.0;
  float salario_final = 0.0;

  printf("\n1. Escrituário\n\n");
  printf("2. Secretário\n\n");
  printf("3. Caixa\n\n");
  printf("4. Gerente\n\n");
  printf("5. Diretor\n\n");

  printf("Digite uma das opcoes acima:  \n\n");
  scanf("%d", &codigo);

  printf("\nDigite o salario atual do trabalhador: \n");
  scanf("%f", &salario_atual);

  switch (codigo) {

  case 1:
    salario_aumentado = salario_atual * (50.0 / 100);
    salario_final = salario_aumentado + salario_atual;
    printf("\nCARGO: Escrituario\n\n");
    printf("VALOR DO AUMENTO:  %.2f\n\n", salario_aumentado);
    printf("NOVO SALARIO:  %.2f\n\n", salario_final);
    break;

  case 2:
    salario_aumentado = salario_atual * (35.0 / 100);
    salario_final = salario_aumentado + salario_atual;
    printf("\nCARGO: Secretario\n\n");
    printf("VALOR DO AUMENTO:  %.2f\n\n", salario_aumentado);
    printf("NOVO SALARIO:  %.2f\n\n", salario_final);
    break;

  case 3:
    salario_aumentado = salario_atual * (20.0 / 100);
    salario_final = salario_aumentado + salario_atual;
    printf("\nCARGO: Caixa\n\n");
    printf("VALOR DO AUMENTO:  %.2f\n\n", salario_aumentado);
    printf("NOVO SALARIO:  %.2f\n\n", salario_final);
    break;

  case 4:
    salario_aumentado = salario_atual * (10.0 / 100);
    salario_final = salario_aumentado + salario_atual;
    printf("\nCARGO: Gerente\n\n");
    printf("VALOR DO AUMENTO:  %.2f\n\n", salario_aumentado);
    printf("NOVO SALARIO:  %.2f\n\n", salario_final);
    break;

  case 5:
    printf("\nCARGO: Diretor\n\n");
    printf("VALOR DO AUMENTO:  Nao tem aumento\n");
    printf("\nNOVO SALARIO:  %.2f\n\n", salario_atual);
    break;

  default:
    printf("\n\nCódigo inválido!!!");
  }

  return 0;
}
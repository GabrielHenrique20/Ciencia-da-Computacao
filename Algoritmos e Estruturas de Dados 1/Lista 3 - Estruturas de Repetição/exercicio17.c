#include <stdio.h>

int main(void) {
  int N = 0;
  int i = 0;
  int j = 1;
  float soma = 0;
  float sequencia = 0;
  printf("\nDigite a quantidade de termos:  \n");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    sequencia = ((float)j) / (float)i;
    soma = soma + sequencia;
    j = j + 2;
    printf("\n\n%.2f\n\n", sequencia);
  }

  printf("\nA soma da sequencia e:  %.2f\n", soma);

  return 0;
}
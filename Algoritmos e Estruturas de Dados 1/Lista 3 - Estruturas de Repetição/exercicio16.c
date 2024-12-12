#include <stdio.h>

int main(void) {
  int N = 0;
  float soma = 0;
  float sequencia = 0;

  printf("\nDigite um valor:  \n");
  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    sequencia = (1.0 / i);

    printf("\n\n%.2f\n\n", sequencia);
    soma = soma + sequencia;
  }

  printf("\nA soma da sequencia e:  %.2f\n", soma);
  return 0;
}
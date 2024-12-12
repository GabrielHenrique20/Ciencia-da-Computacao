#include <stdio.h>

// 𝜋 = S × 4

int main(void) {
  double pi = 0;
  float sequencia = 0;
  float operacao = 0;
  int N = 0;
  int sinal = 1;

  printf("\nDigite N termos para uma sequencia:  \n");
  scanf("%d", &N);

  for (int i = 1; i <= N; i = i + 2) {
    sequencia = (1.0 / i);
    operacao = (operacao + sequencia) * sinal;
    sinal = -sinal;

    printf("\n\n%.2f\n\n", sequencia);
  }
  pi = operacao * 4;

  printf("\nO pi vale:  %.2lf\n", pi);
  return 0;
}
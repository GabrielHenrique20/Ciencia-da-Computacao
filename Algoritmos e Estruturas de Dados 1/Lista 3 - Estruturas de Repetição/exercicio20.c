#include <math.h>
#include <stdio.h>

int main(void) {
  double senoDeX = 0;
  double resultado = 0;
  int fatorial = 1;
  int i = 0;
  int j = 0;
  int N = 0;
  double x;
  int sinal = 1;

  printf("\nDigite a quantidade de termos:  \n");
  scanf("%d", &N);

  printf("\nDigite um valor para o angulo x:  \n");
  scanf("%lf", &x);

  for (j = 1; j <= N; j = j + 2) {
    fatorial = fatorial * j;
  }

  for (i = 1; i <= N; i = i + 2) {
    if (x >= 0 && x <= 6.28) {
      resultado += sinal * (pow(x, i) / fatorial);
      fatorial++;
      sinal = -sinal;
    }
  }

  printf("\nO valor de seno de x é:  %.2lf\n", resultado);
  return 0;
}
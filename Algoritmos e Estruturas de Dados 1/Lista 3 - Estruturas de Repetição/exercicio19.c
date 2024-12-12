#include <stdio.h>

int main(void) {
  int fatorial = 1;
  int i = 0;
  int N = 0;

  printf("\nDigite um numero:  \n");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    fatorial = fatorial * i;
  }

  printf("\nO fatorial do numero %d é:  \n\n\t\t%d\n", N, fatorial);
  return 0;
}
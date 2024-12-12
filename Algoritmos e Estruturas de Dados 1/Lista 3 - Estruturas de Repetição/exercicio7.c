#include <stdio.h>

int main(void) {
  int soma = 0;
  int i = 0;

  for (i = 1; i <= 100; i++) {
    soma = soma + i;
  }

  printf("\nA soma dos numeros e:  %d\n", soma);
  return 0;
}
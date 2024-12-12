#include <stdio.h>

int main(void) {
  int i = 0;
  int soma = 0;

  for (i = 1; i <= 20; i++) {
    soma = soma + i;
  }

  printf("\nA soma dos numeros e:  %d\n", soma);
  return 0;
}
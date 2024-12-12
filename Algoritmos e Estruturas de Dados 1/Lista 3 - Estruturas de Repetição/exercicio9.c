#include <stdio.h>

int main() {
  int i;
  int produto = 1;

  for (i = 1; i <= 100; i++) {
    produto = produto * i;
  }

  printf("\nO produto dos numeros e:  %d\n", produto);
  return 0;
}
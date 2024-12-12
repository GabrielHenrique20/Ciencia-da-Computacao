#include <stdio.h>

int main(void) {
  int x = 0;
  int y = 0;
  int resto = 0;

  printf("Digite o primeiro numero:  \n");
  scanf("%d", &x);

  printf("Digite o segundo numero:  \n");
  scanf("%d", &y);

  resto = x % y;

  printf("O resto da divisao entre esses dois numeros eh:  %d\n", resto);

  return 0;
}
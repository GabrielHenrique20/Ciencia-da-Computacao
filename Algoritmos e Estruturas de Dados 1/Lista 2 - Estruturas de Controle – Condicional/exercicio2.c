#include <stdio.h>

int main(void) {

  int numero1 = 0;

  printf("Digite um numero inteiro:  \n");
  scanf("%d", &numero1);

  if (numero1 % 2 == 0) {
    printf("O numero eh par\n");
  } else {
    printf("O numero eh impar");
  }

  return 0;
}
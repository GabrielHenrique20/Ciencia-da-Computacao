#include <stdio.h>

int main(void) {
  int N = 0;
  int soma = 0;
  int i = 0;

  printf("\nDigite a quantidade de numeros a serem lidos:  \n");
  scanf("%d", &N);

  for (i = 0; i < N; i++) {

    if (i % 2 == 1) {
      soma = soma + i;
    }
  }

  printf("\nA soma dos numeros impares e:  %d\n", soma);
  return 0;
}
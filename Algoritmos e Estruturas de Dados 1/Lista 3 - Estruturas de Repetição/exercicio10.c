#include <stdio.h>

int main(void) {
  int N = 0;
  int produto = 1;
  int i;

  printf("Digite a quantidade de numeros a serem lidos:  \n");
  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {

    if (i % 2 == 0) {
      produto = produto * i;
    }
  }

  printf("\nProduto dos pares e:  %d\n", produto);
  return 0;
}
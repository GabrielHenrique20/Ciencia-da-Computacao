#include <stdio.h>

int main(void) {

  int N = 0;

  printf("\nDigite a quantidade de posições do vetor:  \n");
  scanf("%d", &N);

  int vetor[N];
  int i = 0;

  for (int i = 0; i < N; i++) {
    printf("\nDigite os elementos:  \n");
    scanf("%d", &vetor[i]);
  }

  printf("\nImpares:  \n");
  for (int i = 0; i < N; i++) {
    if (i % 2 != 0) {
      printf("%d\t", vetor[i]);
    }
  }
  return 0;
}
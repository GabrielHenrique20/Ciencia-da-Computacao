#include <stdio.h>

int main(void) {
  int vetor[100];
  int i = 0;

  for (i = 0; i < 100; i++) {
    printf("\nDigite um valor:  \n");
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 100; i++) {
    if (vetor[i] > 0) {
      printf("%d\t", vetor[i]);
    }
  }
  return 0;
}
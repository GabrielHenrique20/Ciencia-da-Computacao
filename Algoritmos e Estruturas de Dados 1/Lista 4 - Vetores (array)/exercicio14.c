#include <stdio.h>

int main(void) {
  int vetor1[5] = {3, 5, 4, 2, 2};
  int vetor2[5] = {7, 15, 20, 0, 18};
  int vetor_resultante[10];
  int i = 0;
  int j = 0;
  int k = 0;

  // intercalar vetores

  for (i = 0; i < 10; i += 2) {
    vetor_resultante[i] = vetor1[j];
    vetor_resultante[i + 1] = vetor2[k];

    j++;
    k++;
  }

  printf("\nVetor resultante:  ");
  // printar vetor resultante
  for (i = 0; i < 10; i++) {
    printf("%d\t", vetor_resultante[i]);
  }

  return 0;
}
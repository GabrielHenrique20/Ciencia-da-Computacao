#include "time.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int matriz[10][10];
  int i, j = 0;
  float media = 0;

  // preencher matriz
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      matriz[i][j] = rand() % 10 + 1;
    }
  }

  // printar matriz
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      printf("%5d", matriz[i][j]);
    }

    printf("\n");
  }

  printf("\n\n");
  // printar diagonal principal
  for (i = 0; i < 10; i++) {
    printf("\n%5d\n", matriz[i][i]);
  }

  printf("\n\n");
  // printar diagonal secundaria
  for (i = 0; i < 10; i++) {
    printf("\n%5d\n", matriz[i][4 - i]);
  }

  // media na diagonal principal
  for (i = 0; i < 10; i++) {
    media += matriz[i][i];
  }

  media /= 10.0;

  printf("\n\nMedia dos elementos na diagonal principal: %.2f\n", media);

  return 0;
}
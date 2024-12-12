#include "time.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int matriz[3][3];
  int i, j = 0;
  float media = 0;

  // preencher matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      matriz[i][j] = rand() % 5 + 1;
    }
  }

  // printar matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%5d", matriz[i][j]);
    }

    printf("\n");
  }

  printf("\n\n");

  // printar abaixo diagonal principal
  for (i = 0; i < 3; i++) {
    for (j = 0; j < i; j++) {
      printf("%5d", matriz[i][j]);
    }

    printf("\n\n");
  }

  return 0;
}
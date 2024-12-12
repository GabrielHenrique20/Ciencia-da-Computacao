// Faça um algoritmo que imprima a transposta de uma matriz 5x5.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[5][5];
  int i = 0;
  int j = 0;

  srand(time(NULL));

  // preencher matriz
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      matriz[i][j] = rand() % 10 + 1;
    }
  }

  // printar matriz
  printf("\nMatriz:  \n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n\n");
  }

  // matriz transposta
  printf("\nMatriz transposta:  \n");
  for (j = 0; j < 5; j++) {
    for (i = 0; i < 5; i++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n\n");
  }
  return 0;
}
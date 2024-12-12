// Faça um algoritmo que imprima os elementos da diagonal
// secundária de uma matriz 5x5

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
    printf("\n");
  }

  // elementos da diagonal secundaria
  printf("\nDiagonal secundaria:  \n");
  for (i = 0; i < 5; i++) {
    printf("%d", matriz[i][4 - i]);
    printf("\n");
  }

  return 0;
}
// Faça um algoritmo que imprima os elementos abaixo da
// diagonal secundária de uma matriz 5x5.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[5][5];
  int i = 0;
  int j = 4;

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

  // a baixo da diagonal secundaria
  printf("\nA baixo da secundaria:  \n");
  for (i = 1; i < 5; i++) {
    for (j = 4; j > i; j--) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
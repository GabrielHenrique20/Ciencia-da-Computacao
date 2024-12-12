// Faça um algoritmo que imprima os elementos abaixo da
// diagonal principal de uma matriz 5x5.

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

  // a  baixo da diagonal principal
  printf("\nAbaixo da diagonal principal:  \n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < i; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
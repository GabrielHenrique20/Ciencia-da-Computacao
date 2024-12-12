#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[4][4];
  int i = 0;
  int j = 0;

  srand(time(NULL));

  // preencher matriz
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      matriz[i][j] = (rand() % 9) + 1;
    }
  }

  // printar matriz
  printf("\nMatriz:  \n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  // elementos localizados na diagonal principal ou abaixo dela
  printf("\nElementos localizados na diagonal principal ou abaixo dela:  \n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j <= i; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n\n");
  }

  return 0;
}
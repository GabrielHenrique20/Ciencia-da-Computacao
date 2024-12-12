#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  float matriz[4][2];
  int i = 0;
  int j = 0;

  /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
  com o valor da função time(NULL).
  Desta forma, a cada execução o valor da "semente" será diferente.
  */

  srand(time(NULL));

  // preencher matriz
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      matriz[i][j] = (float)rand() / (float)(RAND_MAX / 200) - 100;
    }
  }

  // printar matriz completa
  printf("\nMatriz:  \n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      printf("%.2f\t", matriz[i][j]);
    }
    printf("\n");
  }

  // elementos positivos
  printf("\nNumeros positivos na matriz:  \n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      if (matriz[i][j] > 0) {
        printf("%.2f\t", matriz[i][j]);
      }
    }
  }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[4][4];
  int i = 0;
  int j = 0;
  int quantidade = 0;

  srand(time(NULL));

  // preencher matriz
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      matriz[i][j] = rand() % 25;
    }
  }

  // printar matriz
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  // lementos maiores que 15 e menores que 25
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (matriz[i][j] > 15 && matriz[i][j] < 25) {
        quantidade++;
      }
    }
  }

  printf(
      "\nNumero de elementos maiores que 15 e menores que 25 na matriz:  %d\n",
      quantidade);
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[3][4];
  int i = 0; // linhas
  int j = 0; // colunas
  int produtoColuna[4] = {1, 1, 1, 1};

  srand(time(NULL));

  // preencher matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      matriz[i][j] = (rand() % 10) + 1;
    }
  }

  // printa a matriz
  printf("\nMatriz:  \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  // produto dos elementos por coluna
  for (j = 0; j < 4; j++) {
    for (i = 0; i < 3; i++) {
      produtoColuna[j] *= matriz[i][j];
    }
    printf("\nProduto da coluna %d: %d\n", j, produtoColuna[j]);
  }
  return 0;
}
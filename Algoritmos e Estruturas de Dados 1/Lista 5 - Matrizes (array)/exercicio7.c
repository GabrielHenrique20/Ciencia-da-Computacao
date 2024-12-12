#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// matriz transposta é a matriz que se obtém da troca de linhas por colunas de
// uma dada matriz.

int main(void) {
  int matriz[3][5];
  int linhas = 0;
  int colunas = 0;

  srand(time(NULL));

  // preencher matriz
  for (linhas = 0; linhas < 3; linhas++) {
    for (colunas = 0; colunas < 5; colunas++) {
      matriz[linhas][colunas] = (rand() % 10) + 1;
    }
  }

  // printar matriz normal
  printf("\nMatriz:  \n");
  for (linhas = 0; linhas < 3; linhas++) {
    for (colunas = 0; colunas < 5; colunas++) {
      printf("%d\t", matriz[linhas][colunas]);
    }
    printf("\n");
  }

  // printar matriz transposta
  printf("\nMatriz transposta:  \n");
  for (colunas = 0; colunas < 5; colunas++) {
    for (linhas = 0; linhas < 3; linhas++) {
      printf("%d\t", matriz[linhas][colunas]);
    }
    printf("\n");
  }
  return 0;
}
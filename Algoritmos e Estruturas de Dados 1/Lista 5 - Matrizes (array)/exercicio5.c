#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[3][4];
  int i = 0; // linhas
  int j = 0; // colunas
  int somaLinha[3] = {0, 0,
                      0}; // assim como um somador normal, aqui tambem temos que
                          // inciar o vetor com 0 para poder somar

  srand(time(NULL));

  // preencher matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      matriz[i][j] = rand() % 10;
      somaLinha[i] += matriz[i][j];
    }
  }

  // printar matriz e a soma dos elementos de cada linha
  printf("\nMatriz:  \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("---> Soma da linha %d: %d\n", i, somaLinha[i]);
  }

  return 0;
}
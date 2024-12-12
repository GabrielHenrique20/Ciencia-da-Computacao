#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[3][3];
  int novaMatriz[3][3];
  int i = 0; // linhas
  int j = 0; // colunas
  int a = 0;
  int b = 0;
  int maior = 0;

  srand(time(NULL));

  // preencher matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      matriz[i][j] = rand() % 10 + 1;
    }
  }

  // printar matriz
  printf("\nMatriz original:  \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  // achar o maior elemento na matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (i == 0 && j == 0) {
        maior = matriz[i][j];
      }

      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
      }
    }
  }

  // printar nova matriz com base no maior elemento
  printf("\nMatriz resultante:  \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      novaMatriz[i][j] = matriz[i][j] * maior;
      printf("\t%d\t", novaMatriz[i][j]);
    }
    printf("\n");
  }

  printf("\nMaior elemento:  %d\n", maior);
  return 0;
}
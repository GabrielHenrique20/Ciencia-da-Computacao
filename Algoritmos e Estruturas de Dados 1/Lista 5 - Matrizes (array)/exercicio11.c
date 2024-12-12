#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int A[2][2];
  int B[2][2];
  int C[2][2] = {1, 1, 1, 1};
  int i = 0;
  int j = 0;

  srand(time(NULL));

  // preencher matriz A
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      A[i][j] = (rand() % 10) + 1;
    }
  }

  // preencher matriz B
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      B[i][j] = (rand() % 10) + 1;
    }
  }

  // gerar a matriz C
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      C[i][j] = A[i][j] * B[i][j];
    }
  }

  // printar matriz A
  printf("\nMATRIZ A:  \n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d\t", A[i][j]);
    }
    printf("\n");
  }

  // printar matriz B
  printf("\nMATRIZ B:  \n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d\t", B[i][j]);
    }
    printf("\n");
  }

  // printar matriz C
  printf("\nMATRIZ C:  \n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d\t", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
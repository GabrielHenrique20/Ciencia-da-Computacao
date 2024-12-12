#include <stdio.h>

int main(void) {
  int vetorA[10];
  int vetorB[15];
  int vetorC[25];
  int i = 0;
  int j = 0;

  // preencher primeiro vetor
  printf("\nDigite os valores do primeiro vetor:  \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetorA[i]);
  }

  // preencher segundo vetor
  printf("\nDigite os valores do segundo vetor:  \n");
  for (i = 0; i < 15; i++) {
    scanf("%d", &vetorB[i]);
  }

  for (i = 0; i < 10; i++) {
    vetorC[i] = vetorA[i];
  }

  for (i = 0, j = 10; i < 15; i++, j++) {
    vetorC[j] = vetorB[i];
  }

  printf("\nVetor A:  ");
  for (i = 0; i < 10; i++) {
    printf("%d\t", vetorA[i]);
  }

  printf("\nVetor B:  ");
  for (i = 0; i < 15; i++) {
    printf("%d\t", vetorB[i]);
  }

  printf("\nVetor C:  ");
  for (i = 0; i < 25; i++) {
    printf("%d\t", vetorC[i]);
  }
  return 0;
}
#include <stdio.h>

int main(void) {
  int vetorOriginal[10];
  int vetorInvertido[10];
  int i = 0;
  int j = 0;

  // preencher vetor original
  printf("\nDigite valores para o vetor:  \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetorOriginal[i]);
  }

  // vetor invertido
  for (i = 0, j = 9; i < 10; i++, j--) {
    vetorInvertido[j] = vetorOriginal[i];
  }

  // printar vetor original
  printf("\nVetor original:  ");
  for (i = 0; i < 10; i++) {
    printf("%d\t", vetorOriginal[i]);
  }

  // printar vetor original invertido
  printf("\nVetor invertido:  ");
  for (i = 0; i < 10; i++) {
    printf("%d\t", vetorInvertido[i]);
  }
  return 0;
}
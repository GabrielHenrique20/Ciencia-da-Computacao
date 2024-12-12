#include <stdio.h>

int main(void) {
  int vetorOriginal[10];
  int vetorInvertido[10];
  int i = 0;
  int j = 0;

  printf("\nDigite 10 numeros:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetorOriginal[i]);
  }

  // printar vetor original
  printf("\nVetor original: ");
  for (i = 0; i < 10; i++) {
    printf("%d\t", vetorOriginal[i]);
  }

  // inverter vetor
  for (i = 0, j = 9; i < 10; i++, j--) {
    vetorInvertido[j] = vetorOriginal[i];
  }

  printf("\nVertor invertido:  ");
  for (i = 0; i < 10; i++) {
    printf("%d\t", vetorInvertido[i]);
  }

  return 0;
}
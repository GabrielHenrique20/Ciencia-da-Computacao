#include <stdio.h>

int main(void) {
  int numeros[5];
  int i = 0;
  int j = 0;
  int aux = 0;

  // preencher vetor
  printf("\nDigite cinco numeros:  \n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
  }

  // ordenar o vetor
  for (i = 0; i < 4; i++) {
    for (j = i + 1; j < 5; j++) {
      if (numeros[i] > numeros[j]) {
        aux = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = aux;
      }
    }
  }

  // imprimir vetor ordenado
  printf("\nVetor em ordem crescente:  ");
  for (i = 0; i < 5; i++) {
    printf("%d\t", numeros[i]);
  }
  return 0;
}
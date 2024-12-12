#include <stdio.h>

int main(void) {
  int vetor[10];
  int maior = 0;
  int posicao = 0;
  int i = 0;

  // preencher vetor
  for (i = 0; i < 10; i++) {
    printf("\nDigite um valor para a posição %d:  \n", i);
    scanf("%d", &vetor[i]);
  }

  // verificar qual o maior numero e sua posição
  for (i = 0; i < 10; i++) {

    if (vetor[i] >= maior) {
      maior = vetor[i];
      posicao = i;
    }
  }

  printf("\nMaior numero dentro do vetor é %d e sua posição é %d", maior,
         posicao);
  return 0;
}
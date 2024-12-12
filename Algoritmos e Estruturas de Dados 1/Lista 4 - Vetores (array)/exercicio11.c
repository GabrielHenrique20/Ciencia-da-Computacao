#include <stdio.h>

int main(void) {
  int vetor1[5];
  int vetor2[5];
  int vetor3[5];
  int i = 0;
  int soma = 0;

  // preencher primeiro vetor
  printf("\nDigite valores para o primeiro vetor:  \n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &vetor1[i]);
  }

  // preencher segundo vetor
  printf("\nDigite valores para o segundo vetor:  \n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &vetor2[i]);
  }

  printf("\n");

  // calcular vetor 3
  for (i = 0; i < 5; i++) {
    vetor3[i] = vetor1[i] + vetor2[i];
    printf("%d\t", vetor3[i]);
  }
  return 0;
}
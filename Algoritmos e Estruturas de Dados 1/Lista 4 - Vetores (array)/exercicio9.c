#include <math.h>
#include <stdio.h>

int main(void) {
  float vetorA[20];
  int i = 0;
  float somatorio = 0;

  // preencher vetor
  for (i = 0; i < 20; i++) {
    printf("\nDigite um numero:  \n");
    scanf("%f", &vetorA[i]);
  }

  // calcular somatorio
  for (i = 0; i < 20; i++) {
    somatorio += pow((vetorA[i] - vetorA[19 - i]), 2);
  }

  printf("\nO somatorio é:  %.2f\n", somatorio);
  return 0;
}
#include <stdio.h>

int main(void) {
  float matriz[3][3];
  int i = 0;
  int j = 0;
  float maior = 0;
  float menor = 0;

  // preencher matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("\nDigite um numero para a posição %d %d:  ", i, j);
      scanf("%f", &matriz[i][j]);
    }
  }

  // printar matriz
  printf("\n\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%.2f\t", matriz[i][j]);
    }
    printf("\n");
  }

  // maior e menor elementos contidos na matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (i == 0 && j == 0) {
        maior = matriz[i][j];
        menor = matriz[i][j];
      }

      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
      }

      else if (matriz[i][j] < menor) {
        menor = matriz[i][j];
      }
    }
  }

  printf("\nMaior numero digitado na matriz:  %.2f\n", maior);
  printf("\nMenor numero digitado na matriz:  %.2f\n", menor);
  return 0;
}
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  float matriz[3][5];
  int i = 0;       // linhas
  int j = 0;       // colunas
  float media[5];  // media de cada coluna
  float desvio[5]; // desvio de cada coluna
  int soma = 0;

  srand(time(NULL));

  // preencher matriz
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      matriz[i][j] = (rand() % 10) + 1;
    }
  }
  // calcular media de cada coluna
  for (j = 0; j < 5; j++) {
    for (i = 0; i < 3; i++) {
      soma += matriz[i][j];
    }
    media[j] = soma / 3.0;
  }

  // calcular desvio padrao de cada coluna
  for (j = 0; j < 5; j++) {
    for (i = 0; i < 3; i++) {
      soma += pow(matriz[i][j] - media[j], 2);
    }
    desvio[j] = sqrt(soma / 3.0);
  }

  // printar a matriz, a media e desvio de cada coluna dela
  printf("\nMatriz:  \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      printf("%.2f\t", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\nMedia:  \n");
  for (j = 0; j < 5; j++) {
    printf("%.2f\n", media[j]);
  }

  printf("\nDesvio:  \n");
  for (j = 0; j < 5; j++) {
    printf("%.2f\n", desvio[j]);
  }
  return 0;
}
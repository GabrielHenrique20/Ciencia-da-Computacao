#include <stdio.h>

int main(void) {
  float notas[3][3];
  float media[9] = {};
  int i = 0;
  int j = 0;

  // digitar as notas
  for (j = 0; j < 3; j++) {
    printf("\nALUNO %d\n", j + 1);
    for (i = 0; i < 3; i++) {
      printf("\nDigite a nota da  %dª prova:  \n", i + 1);
      scanf("%f", &notas[i][j]);
    }
  }

  // printar matriz
  printf("\nQuadro de notas:  \n\n");
  printf("\nAluno 1\t Aluno 2\t Aluno 3\t\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%.2f\t\t", notas[i][j]);
    }
    printf("\n\n");
  }

  // calcular media
  for (j = 0; j < 3; j++) {
    for (i = 0; i < 3; i++) {
      media[j] += notas[i][j];
    }
    media[j] /= 3.0;
  }

  // printar media
  for (j = 0; j < 3; j++) {
    for (i = 0; i < 3; i++) {
    }
    printf("\nMedia do aluno --->%.2f\n", media[j]);
  }
  return 0;
}
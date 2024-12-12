#include <stdio.h>

int main(void) {
  float vetor1[4];
  float vetor2[4];
  float vetor3[4];
  int i = 0;

  for (i = 0; i < 4; i++) {
    printf("\nDigite elementos do primeiro vetor:  \n");
    scanf("%f", &vetor1[i]);
  }

  for (i = 0; i < 4; i++) {
    printf("\nDigite elementos do segundo vetor:  \n");
    scanf("%f", &vetor2[i]);
  }

  for (i = 0; i < 4; i++) {
    if (vetor1[i] == vetor2[i]) {
      vetor3[i] = 1;
    }

    else {
      vetor3[i] = 0;
    }
  }

  for (i = 0; i < 4; i++) {
    printf("\n\nVetor1 =  %.2f\t", vetor1[i]);
  }

  for (i = 0; i < 4; i++) {
    printf("\n\n\nVetor2 =  %.2f\t", vetor2[i]);
  }

  for (i = 0; i < 4; i++) {
    printf("\n\n\n\nVetor3 =  %.2f\t", vetor3[i]);
  }

  return 0;
}
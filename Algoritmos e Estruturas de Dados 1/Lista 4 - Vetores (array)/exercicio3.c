#include <stdio.h>

int main(void) {
  float notas[10];
  float maior;
  float menor;
  float media = 0;
  float soma = 0;

  for (int i = 0; i < 10; i++) {
    printf("\nDigite a nota do aluno:  \n");
    scanf("%f", &notas[i]);

    soma += notas[i];
  }

  for (int i = 0; i < 10; i++) {

    if (i == 0) {
      maior = notas[i];
      menor = notas[i];
    }
    if (notas[i] > maior) {
      maior = notas[i];
    }

    else if (notas[i] < menor) {
      menor = notas[i];
    }
  }

  media = soma / 10.0;

  printf("\nMaior nota:  %.2f\n", maior);
  printf("\nMenor nota:  %.2f\n", menor);
  printf("\nMedia das notas:  %.2f\n", media);
  return 0;
}
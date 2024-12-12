#include <stdio.h>

int main(void) {
  float soma = 0;
  float media = 0;
  float nota = 0;
  int i = 0;
  int j = 0;

  for (i = 1; i <= 10; i++) {

    media = 0;
    soma = 0;

    for (j = 1; j <= 3; j++) {
      printf("\n\nDigite a nota dos alunos:  \n");
      scanf("%f", &nota);

      soma = soma + nota;
      media = (soma / 3);
    }

    printf("\nSOMA DA NOTA DO ALUNO =  %.2f\n", soma);
    printf("\nMEDIA DA NOTA DO ALUNO:  %.2f\n", media);
  }

  return 0;
}
#include <stdio.h>

int main(void) {
  int idades[10];
  int i = 0;
  int idade_media = 0;
  int soma_idades = 0;
  int novo = 0;
  int velho = 0;
  int maior16 = 0;
  int menor16 = 0;

  // preencher vetor

  for (i = 0; i < 10; i++) {
    printf("\nDigite sua idade:  \n");
    scanf("%d", &idades[i]);

    soma_idades += idades[i];
  }

  // alunos com mais de 16 e menos de 16
  for (i = 0; i < 10; i++) {
    if (idades[i] <= 16) {
      menor16++;
    } else {
      maior16++;
    }
  }

  // aluno mais novo e aluno mais velho
  for (i = 0; i < 10; i++) {
    if (i == 0) {
      novo = idades[i];
      velho = idades[i];
    }

    if (idades[i] > velho) {
      velho = idades[i];
    }

    else if (idades[i] < novo) {
      novo = idades[i];
    }
  }

  idade_media = soma_idades / 10;

  printf("\nTotal de alunos com idade menor ou igual a 16 anos:  %d\n",
         menor16);
  printf("\nTotal de alunos com idade maior que 16 anos:  %d\n", maior16);
  printf("\nIdade média da turma:  %d\n", idade_media);
  printf("\nIdade do aluno mais novo:  %d", novo);
  printf("\nIdade do aluno mais velho:  %d", velho);

  return 0;
}
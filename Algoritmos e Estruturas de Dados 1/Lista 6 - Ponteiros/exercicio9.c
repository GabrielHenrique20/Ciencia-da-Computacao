#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int qtd_alunos = 0;
  double media = 0;
  double *notas;
  int i = 0;

  printf("\nDigite a quantdade de alunos em uma turma: \n");
  scanf("%d", &qtd_alunos);

  notas = (double *)malloc(qtd_alunos * sizeof(double));

  // colocar as notas
  printf("\nDigite as notas dos alunos: \n");
  for (i = 0; i < qtd_alunos; i++) {
    scanf("%lf", &notas[i]);
    media += notas[i];
  }

  // printar nota
  for (i = 0; i < qtd_alunos; i++) {
    printf("Nota do aluno %d ---> %.2lf\n\n", i + 1, notas[i]);
  }

  media /= qtd_alunos;

  printf("\nMedia das notas: %.2lf\n", media);

  free(notas);
  return 0;
}
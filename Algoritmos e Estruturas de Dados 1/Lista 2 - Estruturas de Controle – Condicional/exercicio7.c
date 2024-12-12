#include <stdio.h>

int main(void) {
  float nota1 = 0.0;
  float nota2 = 0.0;
  float nota3 = 0.0;
  int peso1 = 0;
  int peso2 = 0;
  int peso3 = 0;
  float aprovacao = 0;
  double media_ponderada = 0;

  printf("Digite as 3 notas de um aluno:  \n");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  printf("Digite os 3 pesos para as 3 notas:  \n");
  scanf("%d %d %d", &peso1, &peso2, &peso3);

  printf("Digite uma media para aprovacao:  \n");
  scanf("%f", &aprovacao);

  media_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) /
                    (peso1 + peso2 + peso3);

  if (media_ponderada >= aprovacao) {
    puts("APROVADO!!");
  }

  else if (media_ponderada >= 4 && media_ponderada <= aprovacao) {
    puts("EXAME ESPECIAL!!");
  }

  else {
    puts("REPROVADO!!");
  }

  printf("A media ponderada das notas eh:  %2.2f\n", media_ponderada);
  return 0;
}
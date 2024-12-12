#include <math.h>
#include <stdio.h>

int main(void) {
  float nota1 = 0.0;
  float nota2 = 0.0;
  float nota3 = 0.0;
  double nota_final = 0.0;

  do {
    printf("Digite as 3 notas de um aluno (notas entre 0 e 10):  \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
  } while (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 ||
           nota3 > 10);

  nota_final = (nota1 + nota2 + nota3) / 3;

  if (nota_final >= 0.0 && nota_final <= 4.0) {
    printf("REPROVADO!\n");
  }

  else if (nota_final >= 4.0 && nota_final <= 7.0) {
    printf("EXAME DE RECUPERACAO!!\n");
  }

  else if (nota_final >= 7 && nota_final <= 10) {
    printf("APROVADO\n");
  }

  printf("A nota final do aluno foi:  %2.2lf\n", nota_final);

  return 0;
}
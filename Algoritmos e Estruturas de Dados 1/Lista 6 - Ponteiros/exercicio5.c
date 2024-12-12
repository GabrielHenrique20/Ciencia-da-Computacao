#include <stdio.h>

int main(void) {
  int a = 24;
  float b = 33.3;
  char c = 'B';

  // ponteiros
  int *pA;
  float *pB;
  char *pC;

  pA = &a;
  pB = &b;
  pC = &c;

  // antes da alteração
  printf("\nEndereço de a = %p      Conteudo de a = %d\n\n", pA, *pA);
  printf("\nEndereço de b = %p      Conteudo de b = %.1f\n\n", pB, *pB);
  printf("\nEndereço de c = %p      Conteudo de c = %c\n\n", pC, *pC);

  printf("\n\n\nALTERANDO VALORES!!!!!!!!!\n");

  printf("\nDigite um valor para a variavel inteira a: \n");
  scanf("%d", &a);

  printf("\nDigite um valor para a variavel real b: \n");
  scanf("%f", &b);

  printf("\nDigite um valor para a variavel caracter c: \n");
  scanf(" %c", &c);

  printf("\nEndereço de a alterado = %p      Conteudo de a alterado = %d\n\n",
         pA, *pA);
  printf("\nEndereço de b alterado = %p      Conteudo de b alterado = %.1f\n\n",
         pB, *pB);
  printf("\nEndereço de c alterado = %p      Conteudo de c alterado = %c\n\n",
         pC, *pC);
  return 0;
}
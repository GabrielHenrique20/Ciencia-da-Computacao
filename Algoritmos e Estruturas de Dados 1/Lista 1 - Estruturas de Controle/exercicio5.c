#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float numero = 0;
  double AoCubo = 0;
  double raizQuadrada = 0;
  double raizCubica = 0;
  double seno = 0;
  double cosseno = 0;

  printf("Digite um numero:  \n\t");
  scanf("%f", &numero);

  // o número ao cubo;
  AoCubo = pow(numero, 3);

  // a raiz quadrada do número;
  raizQuadrada = sqrt(numero);

  // a raiz cubica do número;
  raizCubica = cbrt(numero);

  // o seno do numero
  seno = sin(numero);

  // o cosseno do numero
  cosseno = cos(numero);

  printf("O cubo do numero eh:  %2.2lf\n", AoCubo);
  printf("A raiz quadrada do numero eh:  %2.2lf\n", raizQuadrada);
  printf("A raiz cubica do numero eh:  %2.2lf\n", raizCubica);
  printf("O seno do numero eh:  %2.2lf\n", seno);
  printf("O cosseno do numero eh:  %2.2lf\n", cosseno);

  return 0;
}
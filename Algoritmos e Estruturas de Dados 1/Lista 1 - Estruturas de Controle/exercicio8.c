#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float baseMENOR = 0;
  float baseMAIOR = 0;
  float altura = 0;
  double areaTRAPEZ = 0;

  printf("Digite um valor para a base menor:  \n");
  scanf("%f", &baseMENOR);

  printf("Digite um valor para a base maior:  \n");
  scanf("%f", &baseMAIOR);

  printf("Digite um valor para a altura:  \n");
  scanf("%f", &altura);

  areaTRAPEZ = (((baseMENOR + baseMAIOR)) * altura) / 2;

  printf("A area do trapezio eh:  %2.2lf\n", areaTRAPEZ);

  return 0;
}
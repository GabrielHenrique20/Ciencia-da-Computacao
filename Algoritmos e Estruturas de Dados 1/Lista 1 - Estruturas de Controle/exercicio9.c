#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float raio = 0;
  double areaCIRC = 0;

  printf("Digite um valor para o raio:  \n");
  scanf("%f", &raio);

  areaCIRC = 3.14 * (pow(raio, 2));

  printf("A area da circunferencia eh:  %2.2lf\n", areaCIRC);

  return 0;
}
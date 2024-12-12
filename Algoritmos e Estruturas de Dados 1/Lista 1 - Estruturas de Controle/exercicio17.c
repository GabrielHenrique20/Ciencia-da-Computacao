#include <math.h>
#include <stdio.h>

int main(void) {
  double horas = 0;
  float minutos = 0;

  printf("Digite uma quantidade de minutos qualquer:  \n");
  scanf("%f", &minutos);

  horas = (minutos / 60);

  printf("%2.2f minutos tem %2.2lf horas\n", minutos, horas);

  return 0;
}
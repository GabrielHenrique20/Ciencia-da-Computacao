#include <math.h>
#include <stdio.h>

int main(void) {
  int horas = 0;
  int minutos = 0;

  printf("Digite uma hora qualquer:  \n");
  scanf("%d", &horas);

  minutos = horas * 60;

  printf("%d horas tem %d minutos\n", horas, minutos);

  return 0;
}
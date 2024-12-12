#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float numero1 = 0;
  float numero2 = 0;
  float numero3 = 0;
  double mediaARIT = 0;

  printf("Digite o primeiro número:  \n");
  scanf("%f", &numero1);

  printf("Digite o segundo número:  \n");
  scanf("%f", &numero2);

  printf("Digite o terceiro número:  \n");
  scanf("%f", &numero3);

  mediaARIT = ((numero1) + (numero2) + (numero3)) / 3;

  printf("A media aritmetica dos numeros digitados e =  %2.2f\n", mediaARIT);

  return 0;
}
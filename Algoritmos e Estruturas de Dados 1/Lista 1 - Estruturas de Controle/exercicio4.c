#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float numero1 = 0;
  float numero2 = 0;
  float numero3 = 0;
  float numero4 = 0;
  double mediaPOND = 0;

  printf("Digite o primeiro numero =  \n");
  scanf("%f", &numero1);

  printf("Digite o segundo numero =  \n");
  scanf("%f", &numero2);

  printf("Digite o terceiro numero =  \n");
  scanf("%f", &numero3);

  printf("Digite o quarto numero =  \n");
  scanf("%f", &numero4);

  mediaPOND =
      ((numero1 * 1) + (numero2 * 2) + (numero3 * 3) + (numero4 * 4)) / 10;

  printf("A media ponderada dos numeros digitados eh:  %2.2f\n", mediaPOND);

  return 0;
}
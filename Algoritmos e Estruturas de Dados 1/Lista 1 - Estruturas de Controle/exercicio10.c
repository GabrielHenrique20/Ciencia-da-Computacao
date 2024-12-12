#include <math.h>
#include <stdio.h>

int main(void) {
  float a = 0;
  float b = 0;
  float c = 0;
  float delta = 0;
  double raiz1 = 0;
  double raiz2 = 0;

  printf("Digite um valor para a:  \n");
  scanf("%f", &a);

  printf("Digite um valor para b:  \n");
  scanf("%f", &b);

  printf("Digite um valor para c:  \n");
  scanf("%f", &c);

  // b^2 - 4 * a * c eh o como calcula o delta

  delta = (b * b) - (4 * a * c);

  // -b +ou+ raiz de delta / 2* a eh como calcula as raizes

  if (delta >= 0) {

    raiz1 = (-b + sqrt(delta)) / (2. * a);
    raiz2 = (-b - sqrt(delta)) / (2. * a);

    printf("O valor da primeira raiz eh:  %2.2lf\n", raiz1);
    printf("O valor da segunda raiz eh:  %2.2lf\n", raiz2);

  } else {

    printf("Nao existem raizes reais");
  }

  return 0;
}

#include <stdio.h>

int main(void) {
  int base = 0;
  int altura = 0;
  float areaRETANG = 0;
  float perimetroRETANG = 0;

  printf("Digite um valor para a base do retangulo:  \n");
  scanf("%d", &base);

  printf("Digite um valor para a altura do retangulo:  \n");
  scanf("%d", &altura);

  perimetroRETANG = (2 * base) + (2 * altura);
  areaRETANG = base * altura;

  printf("A area do retangulo eh :  %.2f\n", areaRETANG);
  printf("O perimetro do retangulo eh :  %.2f\n", perimetroRETANG);

  return 0;
}
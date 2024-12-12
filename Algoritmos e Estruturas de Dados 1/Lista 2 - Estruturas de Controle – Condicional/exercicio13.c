#include <math.h>
#include <stdio.h>

int main(void) {
  int a = 0.0;
  int b = 0.0;
  int c = 0.0;
  double raiz1 = 0.0;
  double raiz2 = 0.0;
  double delta = 0.0;

  printf("Digite tres numeros:  \n");
  scanf("%d %d %d", &a, &b, &c);

  delta = (pow(b, 2)) - (4 * a * c);

  if (delta > 0) {
    raiz1 = -(b) + (sqrt(delta)) / (2 * a);
    raiz2 = -(b) - (sqrt(delta)) / (2 * a);

    printf("As raizes reais sao:  %.2f e %.2f", raiz1, raiz2);
  }

  else {
    puts("RAIZES NAO REAIS!!");
  }

  return 0;
}
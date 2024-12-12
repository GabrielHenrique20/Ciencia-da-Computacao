#include <stdio.h>

int main(void) {
  float numero[10] = {-10, 2, 5, 3, -3, 8, -4, 10, -22, 13};
  float soma = 0;
  int negativos = 0;
  int i = 0;

  for (i = 0; i < 10; i++) {
    if (numero[i] < 0) {
      negativos++;
    }

    else if (numero[i] > 0) {
      soma += numero[i];
    }
  }

  for (i = 0; i < 10; i++) {
    printf("\n%.2f\n", numero[i]);
  }
  printf("\nQuantidade de negativos:  %d\n", negativos);
  printf("\nSoma dos pares:  %.2f\n", soma);
  return 0;
}
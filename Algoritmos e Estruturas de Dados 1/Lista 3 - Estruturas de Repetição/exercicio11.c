#include <stdio.h>

int main(void) {
  int numeros = 0;
  int quantidade = 0;
  int numeroCinco = 0;

  while (numeros != -1) {
    printf("\nDigite numeros:  \n");
    scanf("%d", &numeros);

    quantidade++;

    if (numeros == 5) {
      numeroCinco++;
    }
  }

  printf("\nQuantidade de numeros digitados:  %d\n", quantidade - 1);
  printf("\nQuntidade de vezes que o numero 5 foi digitado:  %d\n",
         numeroCinco);
  return 0;
}
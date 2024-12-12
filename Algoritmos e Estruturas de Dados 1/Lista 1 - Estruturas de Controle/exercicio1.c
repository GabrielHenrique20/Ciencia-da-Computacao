#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero1 = 0;
  int numero2 = 0;
  int numero3 = 0;
  int soma = 0;
  int produto = 0;

  printf("Digite o primeiro número:  \n");
  scanf("%d", &numero1);

  printf("Digite o segundo número:  \n");
  scanf("%d", &numero2);

  printf("Digite o terceiro número:  \n");
  scanf("%d", &numero3);

  soma = (numero1) + (numero2) + (numero3);
  produto = (numero1) * (numero2) * (numero3);

  printf("A soma dos numeros digitados e =  %d\n", soma);
  printf("O produto dos numeros digitados e =  %d\n", produto);

  return 0;
}
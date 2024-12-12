#include <stdio.h>

int main(void) {
  int i = 0;
  int maior = 0;
  int menor = 0;
  float numero = 0;

  for (i = 1; i <= 10; i++) {
    printf("\nDigite um numero real:  \n");
    scanf("%f", &numero);

    if (i == 1) {
      maior = numero;
      menor = numero;
    }

    else {

      if (maior < numero) {
        maior = numero; // vai fazendo um teste pra saber se o novo numero
                        // digitado e maior ou menor que anterior
      }

      else if (menor > numero) {
        menor = numero;
      }
    }
  }
  printf("\nO maior numero e %d e o menor numero e %d", maior, menor);

  return 0;
}
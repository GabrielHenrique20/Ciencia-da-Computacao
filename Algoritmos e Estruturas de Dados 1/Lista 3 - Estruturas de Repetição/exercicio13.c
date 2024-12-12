#include <locale.h>
#include <stdio.h>
// Um número primo é divisível SÓ!!!!! por 1 e por ele mesmo, ou seja, se ele
// for divisível por 2, 3, 4, 5, 6 e assim por diante, ele n é primo. Para isso
// é necessário um teste for pra saber se o numero digitado pelo usuario vai ser
// divisel por outros numeros alem de 1 e ele mesmo!!!!!!

// Exemplos de números primos: 2, 5, 7, 11, 13,

// 0 É FALSE
// 1 É VERDADEIRO

int main(void) {
  int i = 0;
  int numero = 0;
  int primo = 1; /* para indicar se o numero dado numero e primo ou nao     */

  /* Convencao: primo = 1 se o numero dado é primo */
  /* primo = 0 se o numero dado nao é primo       */
  // Ate que se prove ao contrario, o numero e primo, ou seja, vale 1

  printf("\nDigite um número:  \n");
  scanf("%d", &numero);

  for (i = 2; i < numero; i++) {
    if (numero % i == 0) {
      primo = 0;
      // a variavel primo serve para parar tudo dentro do for caso o que
      // aconteça no if seja real, ou seja, se o resto da divisao do numero
      // digitado pelo seus anteriores for 0, ele nao é primo, a variavel iguala
      // a 0 declarando falsidade e acontece o break.
      break;
    }
  }

  if (primo == 1) { // se o primo for verdadeiro:
    printf("\nO número %d é primo\n", numero);
  }

  else { // se o primo nao for verdadeiro, ou seja, igual a 0:

    printf("\nO número %d não é primo\n", numero);
  }

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *ptr;
  int i = 0;

  ptr = (int *)malloc(5 * sizeof(int));

  // digitar o 5 numeros
  printf("\nDigite os 5 numeros: \n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &ptr[i]);
  }

  // Imprima os endereços onde foram armazenados os 5 números
  for (i = 0; i < 5; i++) {
    printf("\nEndereço %d = %p\n\n", i + 1, ptr + i);
  }

  // Realoque um espaço para digitais mais 5 números inteiros
  ptr = (int *)realloc(ptr, 10 * sizeof(int));

  // Peça para o usuário digitar novos 5 números e armazene no novo espaço
  // alocado
  printf("\nDigite mais 5 numeros: \n");
  for (i = 5; i < 10; i++) {
    scanf("%d", &ptr[i]);
  }

  // Imprima os endereços onde foram armazenados os 10 números
  printf("\nEndereços: \n");
  for (i = 0; i < 10; i++) {
    printf("\n%p\n\n", &ptr[i]);
  }

  printf("\n\n");

  // Mostre na tela os 10 números
  printf("\nTodo os numeros: \n");
  for (i = 0; i < 10; i++) {
    printf("\n%d\n", ptr[i]);
  }

  free(ptr);

  return 0;
}
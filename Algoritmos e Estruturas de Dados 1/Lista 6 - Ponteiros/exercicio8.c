#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int quantidade = 5;

  int numeros = 0;
  int *ptr;
  int i = 0;

  ptr = (int *)malloc(quantidade * sizeof(int));

  // preencher memoria
  printf("\nDigite 5 numeros: \n");
  for (i = 0; i < quantidade; i++) {
    scanf("%d", ptr + i);
  }

  // mostrar na tela
  printf("\nNumeros: \n");
  for (i = 0; i < quantidade; i++) {
    printf("\n%d\n", ptr[i]); // *(ptr + i)
  }

  free(ptr);
  return 0;
}
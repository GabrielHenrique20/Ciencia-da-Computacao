#include <stdio.h>

int main(void) {
  int numero[10];
  int i = 0;

  for (i = 0; i < 10; i++) {
    printf("\nDigite um numero:  \n");
    scanf("%d", &numero[i]);
  }

  for (i = 0; i < 10; i++) {
    printf("%d\t", numero[i]);
  }
  return 0;
}
#include <stdio.h>

int main(void) {
  int produto = 1;
  int i = 0;

  for (i = 1; i <= 20; i++) {
    produto = produto * i;
  }

  printf("\nO produto do numero e:  %d\n", produto);
  return 0;
}
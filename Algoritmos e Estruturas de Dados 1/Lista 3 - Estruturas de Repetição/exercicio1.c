#include <stdio.h>

int main(void) {
  int i = 0;

  for (i = 2; i <= 50; i++) {
    if (i % 2 == 0) {
      printf("\nNumeros pares=  %d\n", i);
    }
  }
  return 0;
}
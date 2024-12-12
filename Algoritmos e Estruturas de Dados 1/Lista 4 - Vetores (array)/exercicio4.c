#include <math.h>
#include <stdio.h>

int main(void) {
  int vetor[30];
  int i = 0;

  for (i = 0; i < 30; i++) {
    vetor[i] = pow(i, 2);
  }

  for (i = 0; i < 30; i++) {
    printf("\n%d\n", vetor[i]);
  }
  return 0;
}
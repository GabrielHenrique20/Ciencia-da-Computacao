#include <math.h>
#include <stdio.h>

int main(void) {
  int vetor[100];
  int i = 0;

  for (i = 0; i < 100; i++) {

    if (i % 2 == 0) {
      vetor[i] = pow(i, 2);
    }

    else {
      vetor[i] = pow(i, 3);
    }

    printf("\n%d\n\n", vetor[i]);
  }

  return 0;
}
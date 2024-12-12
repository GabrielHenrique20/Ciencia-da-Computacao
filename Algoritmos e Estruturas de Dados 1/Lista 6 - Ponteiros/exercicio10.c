#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int valores = 30;
  int *ptr;
  int i = 0;

  ptr = (int *)calloc(valores, sizeof(int));

  // de 1 a 10 nos  10 primeiros
  for (i = 0; i < 20; i++) {
    ptr[i] = i + 1;
  }

  // de 10 a 1 nos 10 ultimos
  for (i = 20; i < 30; i++) {
    ptr[i] = 11 - (i - 19);
  }

  // printar
  for (i = 0; i < valores; i++) {
    printf("%d\n", ptr[i]);
  }

  free(ptr);
  return 0;
}
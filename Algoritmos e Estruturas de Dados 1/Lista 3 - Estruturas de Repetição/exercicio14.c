#include <stdio.h>

int main() {
  int quantidade = 0;
  int i = 0;
  int j = 0;
  int primo = 0;

  for (i = 2; i <= 1000; i++) {
    primo = 1;
    for (j = 2; j < i; j++) {
      if (i % j == 0) {
        primo = 0;
        // break;
      }
    }
    if (primo == 1) {
      quantidade++;
    }
  }

  printf("\nExistem %d numeros primos entre 1 e 1000\n", quantidade);
  return 0;
}
#include <stdio.h>

void PA(float a, float r, int n) {
  int i = 0;
  float termos = 0;
  for (i = 0; i < n; i++) {
    termos = a + (i - 1) * r;
    printf("%.2f", termos);
  }
  printf("\n");
}

int main(void) {
  float a, r = 0;
  int n = 0;
  float termos;
  
  printf("Digite o primeiro termo (a): ");
  scanf("%f", &a);

  printf("Digite a razão (r): ");
  scanf("%f", &r);

  printf("Digite o número de termos (n): ");
  scanf("%d", &n);

  printf("Progressão aritmética: ");
  PA(a, r, n);
  return 0;
}
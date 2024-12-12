#include <math.h>
#include <stdio.h>

int main(void) {
  double H = 0.0;
  double F = 0.0;
  double G = 0.0;
  float x = 0;

  printf("Digite um numero:  \n");
  scanf("%f", &x);

  // primeira conta: ℎ(𝑥) = 𝑥2 − 16
  H = pow(x, 2) - 16;
  printf("H = %.2f\n", H);

  // seguda conta: 𝑓(𝑥) = { ℎ(𝑥), se ℎ(𝑥) / 1, se ℎ(𝑥) < 0 }

  if (H >= 0) {
    F = H;
    printf("F = %.2f\n", F);
  }

  else if (H < 0) {
    F = 1;
    printf("F = %.2f\n", F);
  }

  // terceira conta:

  if (x > 5) {
    G = pow(x, 2) + 16;
    printf("G = %.2f\n", G);
  }

  else if (x <= 5) {
    G = -(x) / 2;
    printf("G = %.2f\n", G);
  }
  return 0;
}
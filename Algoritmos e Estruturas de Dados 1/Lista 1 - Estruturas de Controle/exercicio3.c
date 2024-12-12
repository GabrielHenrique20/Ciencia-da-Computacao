#include <math.h>
#include <stdio.h>

int main(void) {
  float A = 4;
  float B = 5;
  float C = 1;
  double letraA = 0;
  double letraB = 0;
  double letraC = 0;
  double letraD = 0;
  double letraE = 0;

  // (a) B * A – B ^ 2 / 4 * C
  letraA = (B * A) - (pow(B, 2) / (4 * C));

  // (b) (A * B) / 3 ^ 2
  letraB = (A * B) / (pow(3, 2));

  // (c) (((B + C) / 2 * A + 10) * 3 * B) – 6
  letraC = ((B + C) / ((2 * A) + 10) * 3 * B) - 6;

  // (d) 7 * 10 – 50 % 3 * 4 + 9
  letraD = (7 * 10) - ((50 % 3) * 4) + 9;

  // (e) (7 * (10 – 5) % 3) * 4 + 9
  letraE = (7 * (10 - 5) % 3) * 4 + 9;

  printf("LETRA A =  %2.2f \n", letraA);
  printf("LETRA B =  %2.2f \n", letraB);
  printf("LETRA C =  %2.2f \n", letraC);
  printf("LETRA D =  %2.2f \n", letraD);
  printf("LETRA E =  %2.2f \n", letraE);

  return 0;
}
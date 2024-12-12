#include <math.h>
#include <stdio.h>

int main(void) {
  float R = 2;
  float S = 5;
  float T = -1;
  float X = 3;
  float Y = 1;
  float Z = 0;

  double letraA = 0;
  double letraB = 0;
  double letraC = 0;
  double letraD = 0;

  // (a)  A ← (R >= 5)  OR  (T > Z)  AND  (X – Y + R > 3 * Z)
  letraA = ((R >= 5) || (T > Z) && ((X - Y) + (R > (3 * Z))));

  // b)  B ← (|T| + 3 >= 4)  AND  NOT(3 * R / 2 < S * 3)
  letraB = (((T * T) + 3 >= 4) && !((3 * R) / 2 < (S * 3)));

  // c)  C ← (X = 2)  OR  (Y = 1)  AND  ((Z = 0)  OR  (R > 3))  AND  (S < 10)
  letraC = ((X == 2) || (Y == 1) && ((Z == 0) || (R > 3)) && (S < 10));

  // (d)  D ← (R ≠ S)  OR  NOT(√R < √X)  AND  (4327 * X * S * Z = 0)
  letraD = ((R != S) || !(sqrt(R) < sqrt(X)) && (4327 * X * S * Z == 0));

  printf("%.2lf\n", letraA);
  printf("%.2lf\n", letraB);
  printf("%.2lf\n", letraC);
  printf("%.2lf\n", letraD);
  return 0;
}
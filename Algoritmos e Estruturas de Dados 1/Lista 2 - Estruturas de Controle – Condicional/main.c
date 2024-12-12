#include <stdio.h>

int main(void) {
  int p = 1;
  int q = 0;

  int letraA = 0;
  int letraB = 0;
  int letraC = 0;
  int letraD = 0;
  int letraE = 0;
  int letraF = 0;
  int letraG = 0;
  int letraH = 0;
  int letraI = 0;
  int letraJ = 0;

  // !p
  letraA = !(p);

  // !q
  letraB = !(q);

  // p && q
  letraC = (p && q);

  // p || q
  letraD = (p || q);

  // (!p) && q
  letraE = ((!p) && q);

  // (!p) || q
  letraF = ((!p) || q);

  // p && (!q)
  letraG = (p && (!q));

  // p || (!q)
  letraH = (p || (!q));

  // (!p) && (!q)
  letraI = ((!p) && (!q));

  // (!p) || (!q)
  letraJ = ((!p) || (!q));

  printf("%d\n", letraA);
  printf("%d\n", letraB);
  printf("%d\n", letraC);
  printf("%d\n", letraD);
  printf("%d\n", letraE);
  printf("%d\n", letraF);
  printf("%d\n", letraG);
  printf("%d\n", letraH);
  printf("%d\n", letraI);
  printf("%d\n", letraJ);

  return 0;
}
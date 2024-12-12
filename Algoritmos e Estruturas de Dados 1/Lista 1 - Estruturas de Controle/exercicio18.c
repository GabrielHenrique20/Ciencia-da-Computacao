#include <math.h>
#include <stdio.h>

int main(void) {
  float x1 = 0;
  float y1 = 0;
  float x2 = 0;
  float y2 = 0;
  double distancia_entre_pontos = 0;

  printf("Digite um numero inteiro para o ponto x1:  \n");
  scanf("%f", &x1);

  printf("Digite um numero inteiro para o ponto y1:  \n");
  scanf("%f", &y1);

  printf("Digite um numero inteiro para o ponto x2:  \n");
  scanf("%f", &x2);

  printf("Digite um numero inteiro para o ponto y2:  \n");
  scanf("%f", &y2);

  distancia_entre_pontos = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("A distancia entre os pontos digitados eh:  %2.2f\n",
         distancia_entre_pontos);

  return 0;
}
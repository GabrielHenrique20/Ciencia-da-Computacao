#include <math.h>
#include <stdio.h>

// OBS: "se a soma das medidas de dois deles é sempre maior que a medida do
// terceiro, então, eles podem formar um triângulo."

int main(void) {
  float lado1 = 0.0;
  float lado2 = 0.0;
  float lado3 = 0.0;

  printf("Digite medidas para 3 lados de um triangulo:  \n");
  scanf("%f %f %f", &lado1, &lado2, &lado3);

  if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) &&
      (lado2 + lado3 > lado1)) {

    // equilatero (tres lados iguais)
    if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1) {
      printf("TRIANGULO EQUILATERO!!");
    }

    // isosceles (pelo menos dois dos lados iguais e um diferente)
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
      printf("TRIANGULO ISOSCELES!!");
    }

    // Escaleno (todos os lados sao diferentes)
    else {
      printf("TRIANGULO ESCALENO");
    }

  }

  else {
    puts("Não e possivel formar um trinangulo com essas medidas!!");
  }
  return 0;
}
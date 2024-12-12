#include <math.h>
#include <stdio.h>

int main(void) {

  // numeros
  float numeroHORAS = 0;
  float salario_minimo = 0;
  float horas_extras = 0;

  // valores
  float valor_horas = 0;
  float valor_extras = 0;
  float salario_bruto = 0;
  float quantia_extras = 0;

  // final
  float salario_final = 0;

  printf("Digite quanto vale seu salario minimo:  \n");
  scanf("%f", &salario_minimo);

  printf("Digite o numero de horas trabalhas:  \n");
  scanf("%f", &numeroHORAS);

  printf("Digite o numero de horas extras trabalhas:  \n");
  scanf("%f", &horas_extras);

  // o valor pago por hora trabalhada é 1/8 do salário mínimo;
  valor_horas = salario_minimo / 8;

  // o valor pago por hora extra vale 1/4 do salário mínimo;
  valor_extras = salario_minimo / 4;

  // o salário bruto equivale ao número de horas trabalhadas vezes o valor pago
  // por hora trabalhada;
  salario_bruto = numeroHORAS * valor_horas;

  // a quantia a receber por horas extras equivale ao número de horas extras
  // realizadas multiplicado pelo valor pago por hora extra;
  quantia_extras = horas_extras * valor_extras;

  // o salário a receber é a soma do salário bruto e da quantia a receber pelas
  // horas extras.
  salario_final = salario_bruto + quantia_extras;

  printf("O salario final do funcionario eh:  %.2f\n", salario_final);

  return 0;
}
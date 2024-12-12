#include <iostream>
#include <string>
using namespace std;

class Carro {
private:
  double gasolina;
  double distancia;
  int quantidade;
  int rendimento;

public:
  // objeto
  Carro() : gasolina(0), distancia(0), quantidade(50), rendimento(15) {}

  void abastecer(double gasolina) {
    this->gasolina = gasolina;

    if (gasolina > quantidade) {
      gasolina = 0;
    }
    distancia = 0;
  }

  void mover(double distancia) {
    this->distancia = distancia;
    double litros = distancia / rendimento;

    gasolina -= litros;

    if (gasolina < 0) {
      gasolina = 0;
    }
  }

  double getGasolina() { return gasolina; }

  double getDistancia() { return distancia; }
};

int main() {
  Carro carro1, carro2;

  carro1.abastecer(20);
  carro1.mover(200);

  carro2.abastecer(40);
  carro2.mover(400);

  printf("\nCarro 1: \n");
  printf("Distancia percorrida -> %.2f\n", carro1.getDistancia());
  printf("Gasolina restante -> %.2f LITROS\n", carro1.getGasolina());

  printf("\nCarro 2: \n");
  printf("Distancia percorrida -> %.2f\n", carro2.getDistancia());
  printf("Gasolina restante -> %.2f LITROS\n", carro2.getGasolina());
}
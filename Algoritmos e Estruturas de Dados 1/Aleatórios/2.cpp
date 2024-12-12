#include <iostream>
#include <string>
using namespace std;

class Relogio {
private:
  int hora;
  int minuto;
  int segundo;

public:
  Relogio() : hora(0), minuto(0), segundo(0) {}

  void setHora(int hora, int minuto, int segundo) {
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
  }

  string getHora() {
    string horario;
    horario = printf("\n%d:%d:%d", hora, minuto, segundo);

    return horario;
  }

  void atualizar() {
    segundo++;
    if (segundo == 60) {
      segundo = 0;
      minuto++;
    }

    if (minuto == 60) {
      minuto = 0;
      hora++;
    }

    if (hora == 24) {
      hora = 0;
      minuto = 0;
      segundo = 0;
    }
  }
};

int main() {
  Relogio R;
  int i = 0;

  R.setHora(23, 59, 58);

  for (i = 0; i < 10; i++) {
    R.atualizar();
    R.getHora();
  }

  R.setHora(13, 39, 29);

  for (i = 0; i < 10; i++) {
    R.atualizar();
    R.getHora();
  }

  return 0;
}
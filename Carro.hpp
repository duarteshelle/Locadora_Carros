#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <string>

class Carro: private Veiculo {
  public:
    bool ar_condicionado;
    bool marcha_automatica;
    bool motor_flex;
    std::string status;
    std::string Status() {

    }

  private:

}

#endif

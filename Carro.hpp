#ifndef CARRO_H
#define CARRO_H

#include <Veiculo.hpp>

#include <iostream>
#include <string>

class Carro : public Veiculo
{
private:
    
public:
    bool arCondicionado;
    bool marchaAutomatica;
    bool motorFlex;
    bool disponivel;



    Carro(std::string modelo, std::string marca, int ano, int placa);
    ~Carro();
};



#endif

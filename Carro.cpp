#include "Carro.hpp"

Carro::Carro(std::string modelo, std::string marca, int ano, int placa){
    modelo = modelo;
    marca = marca;
    ano = ano;
    placa = placa;

    arCondicionado = true;
    marchaAutomatica = true;
    motorFlex = true;
    disponivel = true;
}


Carro::~Carro(){}




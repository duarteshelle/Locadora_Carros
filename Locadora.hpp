#ifndef LOCADORA_H
#define LOCADORA_H

#include "Carro.hpp"

#include <iostream>
#include <string>
#include <vector>

class Locadora {
private:
    std::vector<Carro> carros;

public:
    Locadora();

    void adicionarCarro(const Carro& carro);
    void listarCarrosDisponiveis();
    void alugarCarro(const std::string& modelo);
    void devolverCarro(const std::string& modelo);
    void fazerReserva(const std::string& dataInicio, const std::string& dataFim);
};

#endif
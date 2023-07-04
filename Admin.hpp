#ifndef ADMIN_H
#define ADMIN_H

#include "Conta.hpp"

#include <iostream>
#include <string>
#include <vector>

class Admin : public Conta
{
private:
    /* data */
public:
    Admin();
    ~Admin();

    void gerarRelatorio(const std::vector<Veiculo> &veiculos) {}
};

#endif
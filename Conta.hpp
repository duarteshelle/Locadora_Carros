#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <string>

class Conta
{
private:
    /* data */
public:
    std::string nome;
    int cpf;
    std::string senha;

    Conta();
    Conta(std::string nome, int cpf, std::string senha);
    ~Conta();
};







#endif

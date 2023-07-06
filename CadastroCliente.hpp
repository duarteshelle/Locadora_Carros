#ifndef CADASTRO_CLIENTE_HPP
#define CADASTRO_CLIENTE_HPP

#include "Cliente.hpp"

#include <string>
#include <vector>

class CadastroCliente{
private:
    std::vector<Cliente> clientes;

public:
    void cadastrarCliente(std::string nome, int cpf, std::string senha);
    void listarClientes();
};

#endif

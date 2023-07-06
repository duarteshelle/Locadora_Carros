#include "CadastroCliente.hpp"
#include <iostream>


void CadastroCliente::cadastrarCliente(std::string nome, int cpf, std::string senha) {
    clientes.push_back(Cliente(nome, cpf, senha));
}

void CadastroCliente::listarClientes() {
    std::cout << "Clientes cadastrados:" << std::endl;
    for (const auto& cliente : clientes) {
        std::cout << "Nome: " << cliente.nome << ", CPF: " << cliente.cpf << std::endl;
    }
}

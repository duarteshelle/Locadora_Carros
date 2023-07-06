#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include "Conta.hpp"

class Cliente : public Conta
{
private:
    std::string endereco;
    std::string telefone;
    std::string carteiraMotorista;
    std::string carteiraPagamento;
    std::string dataNascimento;
    std::string email;
    std::vector<std::string> historicoCliente;

public:
    Cliente(std::string nome, std::string dataNascimento, std::string email,
            std::string senha, std::string endereco, std::string telefone,
            std::string carteiraMotorista, std::string carteiraPagamento);
    ~Cliente();

    std::string getEndereco() const;
    void setEndereco(const std::string &endereco);

    std::string getTelefone() const;
    void setTelefone(const std::string &telefone);

    std::string getCarteiraMotorista() const;
    void setCarteiraMotorista(const std::string &carteiraMotorista);

    std::string getCarteiraPagamento() const;
    void setCarteiraPagamento(const std::string &carteiraPagamento);

    std::string getDataNascimento() const;
    void setDataNascimento(const std::string &dataNascimento);

    std::string getEmail() const;
    void setEmail(const std::string &email);

    void adicionarHistoricoCliente(const std::string &historicoCliente);
    std::vector<std::string> getHistoricoCliente() const;
};

#endif

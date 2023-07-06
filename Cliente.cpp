#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string dataNascimento, std::string email,
                 std::string senha, std::string endereco, std::string telefone,
                 std::string carteiraMotorista, std::string carteiraPagamento)
    : Conta(nome, 0, senha), endereco(endereco), telefone(telefone),
      carteiraMotorista(carteiraMotorista), carteiraPagamento(carteiraPagamento),
      dataNascimento(dataNascimento), email(email) {}

Cliente::~Cliente() {}

std::string Cliente::getEndereco() const
{
    return endereco;
}

void Cliente::setEndereco(const std::string &endereco)
{
    this->endereco = endereco;
}

std::string Cliente::getTelefone() const
{
    return telefone;
}

void Cliente::setTelefone(const std::string &telefone)
{
    this->telefone = telefone;
}

std::string Cliente::getCarteiraMotorista() const
{
    return carteiraMotorista;
}

void Cliente::setCarteiraMotorista(const std::string &carteiraMotorista)
{
    this->carteiraMotorista = carteiraMotorista;
}

std::string Cliente::getCarteiraPagamento() const
{
    return carteiraPagamento;
}

void Cliente::setCarteiraPagamento(const std::string &carteiraPagamento)
{
    this->carteiraPagamento = carteiraPagamento;
}

std::string Cliente::getDataNascimento() const
{
    return dataNascimento;
}

void Cliente::setDataNascimento(const std::string &dataNascimento)
{
    this->dataNascimento = dataNascimento;
}

std::string Cliente::getEmail() const
{
    return email;
}

void Cliente::setEmail(const std::string &email)
{
    this->email = email;
}

void Cliente::adicionarHistoricoCliente(const std::string &historicoCliente)
{
    this->historicoCliente.push_back(historicoCliente);
}

std::vector<std::string> Cliente::getHistoricoCliente() const
{
    return historicoCliente;
}

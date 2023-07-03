#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string dataNascimento, std::string cpf, std::string email,
                 std::string senha, std::string endereco, std::string telefone,
                 std::string carteiraMotorista, std::string carteiraPagamento)
    : Conta(nome, cpf, senha), endereco(endereco), telefone(telefone),
      carteiraMotorista(carteiraMotorista), carteiraPagamento(carteiraPagamento),
      dataNascimento(dataNascimento), cpf(cpf), email(email) {}

Cliente::~Cliente() {}

std::string Cliente::getEndereco() const {
    return endereco;
}

void Cliente::setEndereco(const std::string& endereco) {
    this->endereco = endereco;
}

std::string Cliente::getTelefone() const {
    return telefone;
}

void Cliente::setTelefone(const std::string& telefone) {
    this->telefone = telefone;
}

std::string Cliente::getCarteiraMotorista() const {
    return carteiraMotorista;
}

void Cliente::setCarteiraMotorista(const std::string& carteiraMotorista) {
    this->carteiraMotorista = carteiraMotorista;
}

std::string Cliente::getCarteiraPagamento() const {
    return carteiraPagamento;
}

void Cliente::setCarteiraPagamento(const std::string& carteiraPagamento) {
    this->carteiraPagamento = carteiraPagamento;
}

std::string Cliente::getDataNascimento() const {
    return dataNascimento;
}

void Cliente::setDataNascimento(const std::string& dataNascimento) {
    this->dataNascimento = dataNascimento;
}

std::string Cliente::getCPF() const {
    return cpf;
}

void Cliente::setCPF(const std::string& cpf) {
    this->cpf = cpf;
}

std::string Cliente::getEmail() const {
    return email;
}

void Cliente::setEmail(const std::string& email) {
    this->email = email;
}

//void Cliente::adicionarHistorico(const std::string& historico) {     // historico  ***provavelmente n funciona ainda***
//    this->historico.push_back(historico);                            // historico  ***provavelmente n funciona ainda***
//}                                                                    // historico  ***provavelmente n funciona ainda***

//std::vector<std::string> Cliente::getHistorico() const {             // historico  ***provavelmente n funciona ainda***
//    return historico;                                                // historico  ***provavelmente n funciona ainda***
//}                                                                    // historico  ***provavelmente n funciona ainda***

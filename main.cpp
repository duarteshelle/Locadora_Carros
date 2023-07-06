#include "Cliente.hpp"
#include "Admin.hpp"
#include "Locadora.hpp"



#include <iostream>
#include <string>
#include <vector>


int main() {
    
Locadora locadora;
Cliente cliente;

int opcao;
std::string modelo;
std::string cpf, senha;
int opcaoAdmin;
std::string novoModelo, novaMarca;
int novoAno, novaPlaca;
bool possuiAr, possuirMarcha, possuirMotorFlex;


    do {
        // Mostrar página inicial
        std::cout << "===== Página Inicial =====" << std::endl;
        std::cout << "Selecione uma opção:" << std::endl;
        std::cout << "1. Cliente" << std::endl;
        std::cout << "2. Administrador" << std::endl;
        std::cout << "0. Sair" << std::endl;
        std::cout << "==========================" << std::endl;
        std::cout << "Opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                // Menu do Cliente
                std::cout << "===== Menu do Cliente =====" << std::endl;
                int opcaoCliente;

                do {
                    std::cout << "Selecione uma opção:" << std::endl;
                    std::cout << "1. Criar conta" << std::endl;
                    std::cout << "2. Autenticação" << std::endl;
                    std::cout << "0. Voltar para a página inicial" << std::endl;
                    std::cout << "==================================" << std::endl;
                    std::cout << "Opção: ";
                    std::cin >> opcaoCliente;

                    switch (opcaoCliente) {
                        case 1:
                            std::cout << "===== Criar Conta =====" << std::endl;
                            std::cout << "Endereço: ";
                            std::cin.ignore();
                            std::getline(std::cin, novoEndereco);
                            std::cout << "Telefone: ";
                            std::getline(std::cin, novoTelefone);
                            std::cout << "Carteira de Motorista: ";
                            std::getline(std::cin, novaCarteiraMotorista);
                            std::cout << "Data de Nascimento: ";
                            std::getline(std::cin, novaDataNascimento);
                            std::cout << "Email: ";
                            std::getline(std::cin, novoEmail);
                            std::cout << "CPF: ";
                            std::cin >> novoCPF;
                            std::cout << "Senha: ";
                            std::cin >> novaSenha;

                            cliente.clientes.push_back(Cliente("", novaDataNascimento, novoCPF, novoEmail, novaSenha, novoEndereco, novoTelefone, novaCarteiraMotorista, ""));
                            std::cout << "Conta criada com sucesso!" << std::endl;
                            break;
                        case 2:
                            std::cout << "===== Autenticação do Cliente =====" << std::endl;
                            std::cout << "CPF: ";
                            std::cin >> cpf;
                            std::cout << "Senha: ";
                            std::cin >> senha;

                            // Verificar autenticação do cliente
                            bool clienteAutenticado = false;
                            for (const auto& cliente : cliente.clientes) {
                                if (cliente.getCPF() == cpf && cliente.getSenha() == senha) {
                                    clienteAutenticado = true;
                                    break;
                                }
                            }

                            if (clienteAutenticado) {
                                // Menu options for the authenticated client
                                int opcaoMenuCliente;
                                do {
                                    std::cout << "===== Menu do Cliente =====" << std::endl;
                                    std::cout << "Selecione uma opção:" << std::endl;
                                    std::cout << "1. Adicionar cartão de crédito" << std::endl;
                                    std::cout << "2. Remover cartão de crédito" << std::endl;
                                    std::cout << "3. Pesquisar carros disponíveis" << std::endl;
                                    std::cout << "4. Fazer uma reserva" << std::endl;
                                    std::cout << "5. Ver custo da reserva" << std::endl;
                                    std::cout << "6. Escolher cartão de crédito" << std::endl;
                                    std::cout << "7. Confirmar reserva" << std::endl;
                                    std::cout << "8. Alterar senha" << std::endl;
                                    std::cout << "0. Voltar para a página inicial" << std::endl;
                                    std::cout << "==================================" << std::endl;
                                    std::cout << "Opção: ";
                                    std::cin >> opcaoMenuCliente;

                                    switch (opcaoMenuCliente) {
                                        case 1:
                                            std::cout << "===== Adicionar Cartão de Crédito =====" << std::endl;
                                            std::cout << "Digite o número do cartão de crédito: ";
                                            std::string numeroCartao;
                                            std::cin >> numeroCartao;

                                            // Add cartão do cliente
                                            cliente.setCarteiraPagamento(numeroCartao);
                                            std::cout << "Cartão de crédito adicionado com sucesso!" << std::endl;
                                            break;
                                        case 2:
                                            std::cout << "===== Remover Cartão de Crédito =====" << std::endl;
                                            std::cout << "Lista de Cartões de Crédito:" << std::endl;

                                            // Recebe o numero do cliente
                                            std::string numeroCartao = cliente.getCarteiraPagamento();

                                            if (numeroCartao.empty()) {
                                                std::cout << "Não há cartões de crédito cadastrados na conta." << std::endl;
                                            } else {
                                                std::cout << "Número do Cartão de Crédito: " << numeroCartao << std::endl;
                                                std::cout << "Deseja remover este cartão? (S/N): ";
                                                std::string resposta;
                                                std::cin >> resposta;

                                                if (resposta == "S" || resposta == "s") {
                                                    // Remove o cartão
                                                    cliente.setCarteiraPagamento("");
                                                    std::cout << "Cartão de crédito removido com sucesso!" << std::endl;
                                                } else {
                                                    std::cout << "Operação cancelada." << std::endl;
                                                }
                                            }
                                            break;
                                        case 3:
                                            std::cout << "===== Pesquisar Carros Disponíveis =====" << std::endl;
                                            locadora.listarCarrosDisponiveis();
                                            break;
                                        case 4:
                                            std::cout << "===== Fazer uma Reserva =====" << std::endl;
                                            // Faz a reserva utilizando a classe Locadora
                                            std::string dataInicio, dataFim;
                                            std::cout << "Digite a data de início da reserva (DD/MM/AAAA): ";
                                            std::cin >> dataInicio;
                                            std::cout << "Digite a data de fim da reserva (DD/MM/AAAA): ";
                                            std::cin >> dataFim;
                                            locadora.fazerReserva(dataInicio, dataFim);
                                            break;
                                        case 5:
                                            std::cout << "===== Ver Custo da Reserva =====" << std::endl;
                                            // Implementar
                                            break;
                                        case 6:
                                            std::cout << "===== Escolher Cartão de Crédito =====" << std::endl;
                                            // Implementar
                                            break;
                                        case 7:
                                            std::cout << "===== Confirmar Reserva =====" << std::endl;
                                            // Implementar
                                            break;
                                        case 8:
                                            std::cout << "===== Alterar Senha =====" << std::endl;
                                            std::cout << "Nova senha: ";
                                            std::cin >> novaSenha;

                                            // Update the client's password
                                            for (auto& cliente : cliente.clientes) {
                                                if (cliente.getCPF() == cpf) {
                                                    cliente.setSenha(novaSenha);
                                                    break;
                                                }
                                            }
                                            std::cout << "Senha alterada com sucesso!" << std::endl;
                                            break;
                                        case 0:
                                            std::cout << "Voltando para a página inicial..." << std::endl;
                                            break;
                                        default:
                                            std::cout << "Opção inválida. Tente novamente." << std::endl;
                                            break;
                                    }
                                } while (opcaoMenuCliente != 0);
                            } else {
                                std::cout << "Autenticação falhou. CPF ou senha incorretos." << std::endl;
                            }
                            break;
                        case 0:
                            std::cout << "Voltando para a página inicial..." << std::endl;
                            break;
                        default:
                            std::cout << "Opção inválida. Tente novamente." << std::endl;
                            break;
                    }
                } while (opcaoCliente != 0);
                break;
            case 2:
                
                // Menu do Administrador
                std::cout << "===== Menu do Administrador =====" << std::endl;
                std::cout << "Selecione uma opção:" << std::endl;
                std::cout << "1. Adicionar carro" << std::endl;
                std::cout << "2. Listar carros disponíveis" << std::endl;
                std::cout << "3. Alugar um carro" << std::endl;
                std::cout << "4. Devolver carro" << std::endl;
                std::cout << "5. Cadastrar cliente" << std::endl;
                std::cout << "6. Alterar senha do administrador" << std::endl;
                std::cout << "0. Voltar para a página inicial" << std::endl;
                std::cout << "=================================" << std::endl;
                std::cout << "Opção: ";
                std::cin >> opcaoAdmin;

                switch (opcaoAdmin) {
                    case 1:
                        std::cout << "Informe o modelo do novo carro: ";
                        std::cin >> novoModelo;
                        std::cout << "Informe a marca do novo carro: ";
                        std::cin >> novaMarca;
                        std::cout << "Informe o ano do novo carro: ";
                        std::cin >> novoAno;
                        std::cout << "Informe a placa do novo carro: ";
                        std::cin >> novaPlaca;
                        /*
                        std::cout << "O carro possui ar condicionado: S/N ";
                        std::cin >> possuiAr;
                        if(possuiAr = 'S'){
                            return possuiAr = true;
                        }
                        std::cout << "O carro possui Marcha automatica: S/N ";
                        std::cin >> possuirMarcha;
                        if(possuirMarcha = 'S'){
                            return possuirMarcha = true;
                        }
                        std::cout << "O carro possui Motor Flex: S/N ";
                        std::cin >> possuirMotorFlex;
                        if(possuirMotorFlex = 'S'){
                            return possuirMotorFlex = true;
                        }
                       */
                        locadora.adicionarCarro(Carro(novoModelo, novaMarca, novoAno, novaPlaca));
                        std::cout << "Novo carro adicionado com sucesso!" << std::endl;
                        break;
                    case 2:
                        locadora.listarCarrosDisponiveis();
                        break;
                    case 3:
                        std::cout << "Informe o modelo do carro que deseja alugar: ";
                        std::cin >> modelo;
                        locadora.alugarCarro(modelo);
                        break;
                    case 4:
                        std::cout << "Informe o modelo do carro que deseja devolver: ";
                        std::cin >> modelo;
                        locadora.devolverCarro(modelo);
                        break;
                    case 5:
                        std::cout << "Informe o nome do cliente: ";
                        //std::cin >> novoModelo;
                        std::cout << "Informe o CPF do cliente: ";
                        //std::cin >> novaMarca;
                        std::cout << "Informe a senha do cliente: ";
                        //std::cin >> novoAno;
                        //locadora.adicionarCarro(Carro(novoModelo, novaMarca, novoAno));
                        std::cout << "Cliente cadastrado com sucesso!" << std::endl;
                        break;
                    case 5:
                        std::cout << "===== Alterar Senha do Administrador =====" << std::endl;
                        std::cout << "Nova senha: ";
                        std::cin >> novaSenha;
                        //muudar senha do adm
                        admin.setSenha(novaSenha);
                        std::cout << "Senha do administrador alterada com sucesso!" << std::endl;
                        break;    
                    case 0:
                        std::cout << "Voltando para a página inicial..." << std::endl;
                        break;
                    default:
                    std::cout << "Opção inválida. Tente novamente." << std::endl;
                    break; 
                } while (opcaoAdmin != 0);
                break;

            case 0:
                // Encerrar o programa
                std::cout << "Encerrando o programa..." << std::endl;
                break;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
                break;
        }

    } while (opcao != 0);

    return 0;
}
       

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
                // Autenticação do Cliente
                std::cout << "===== Autenticação do Cliente =====" << std::endl;
                std::cout << "CPF: ";
                std::cin >> cpf;
                std::cout << "Senha: ";
                std::cin >> senha;

                // Verificar autenticação do cliente
                bool clienteAutenticado = false;
                for (const auto& cliente : cliente.clientes) {
                    if (cliente.getCPF() == cpf && cliente.senha == senha) {
                        clienteAutenticado = true;
                        break;
                    }
                }

                if (clienteAutenticado) {
                    // Menu do Cliente
                    std::cout << "===== Menu do Cliente =====" << std::endl;
                    // Implemente as opções do menu para o cliente aqui
                } else {
                    std::cout << "Autenticação falhou. CPF ou senha incorretos." << std::endl;
                }
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
       

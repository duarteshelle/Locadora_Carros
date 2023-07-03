#include "Admin.hpp"

Admin::~Admin(){}

void Admin::gerarRelatorio(const std::vector<Veiculo>& veiculos){
    std::cout << "Relatório de Veículos Disponíveis:\n";
    std::cout << "---------------------------------\n";
    for (const auto& veiculo : veiculos) {
        if (veiculo.disponivel) {
            std::cout << "Marca: " << veiculo.marca << std::endl;
            std::cout << "Modelo: " << veiculo.modelo << std::endl;
            std::cout << "Ano: " << veiculo.ano << std::endl;
            std::cout << "Disponível: Sim\n";
            std::cout << "---------------------------------\n";
        }
    }
}
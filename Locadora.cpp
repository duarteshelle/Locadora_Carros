#include "Locadora.hpp"

Locadora::Locadora() {}

void Locadora::adicionarCarro(const Carro& carro) {
    carros.push_back(carro);
}

void Locadora::listarCarrosDisponiveis() {
    std::cout << "Carros disponíveis para locação:" << std::endl;
    for (const auto& carro : carros) {
        if (carro.disponivel) {
            std::cout << "Marca: " << carro.marca << ", Modelo: "
                << carro.modelo << ", Ano: " << carro.ano << std::endl;
        }
    }
}

void Locadora::alugarCarro(const std::string& modelo) {
    for (auto& carro : carros) {
        if (carro.modelo == modelo && carro.disponivel) {
            carro.disponivel = false;
            std::cout << "Carro " << carro.marca << " "
                << carro.modelo << " alugado com sucesso!" << std::endl;
            return;
        }
    }

    std::cout << "Não foi possível encontrar um carro disponível com o modelo especificado." << std::endl;
}

void Locadora::devolverCarro(const std::string& modelo) {
    for (auto& carro : carros) {
        if (carro.modelo == modelo && !carro.disponivel) {
            carro.disponivel = true;
            std::cout << "Carro " << carro.marca << " " << carro.modelo
                << " devolvido com sucesso!" << std::endl;
            return;
        }
    }

    std::cout << "Não foi possível encontrar um carro alugado com o modelo especificado." << std::endl;
}

void Locadora::fazerReserva(const std::string& dataInicio, const std::string& dataFim) {
    std::cout << "===== Fazer uma Reserva =====" << std::endl;
    std::cout << "Carros disponíveis para reserva no período de " << dataInicio << " a " << dataFim << ":" << std::endl;

    std::vector<Carro> carrosDisponiveis;
    for (const auto& carro : carros) {
        if (carro.disponivel) {
            carrosDisponiveis.push_back(carro);
            std::cout << "Marca: " << carro.marca << ", Modelo: "
                << carro.modelo << ", Ano: " << carro.ano << std::endl;
        }
    }

    if (carrosDisponiveis.empty()) {
        std::cout << "Não há carros disponíveis para reserva." << std::endl;
        return;
    }

    std::cout << "Digite o número correspondente ao carro que deseja reservar: ";
    int opcao;
    std::cin >> opcao;

    if (opcao < 1 || opcao > carrosDisponiveis.size()) {
        std::cout << "Opção inválida." << std::endl;
        return;
    }

    Carro& carroSelecionado = carrosDisponiveis[opcao - 1];
    carroSelecionado.disponivel = false;
    std::cout << "Carro " << carroSelecionado.marca << " "
        << carroSelecionado.modelo << " reservado com sucesso!" << std::endl;
}

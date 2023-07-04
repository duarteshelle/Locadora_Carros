#ifndef PAGAMENTO_H
#define PAGAMENTO_H

class Pagamento
{
public:
    double valorDiario;
    int quantidadeDias;
    double taxas;

    double calcularTotal();
};

#endif

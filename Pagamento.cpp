#include "pagamento.hpp"

double Pagamento::calcularTotal()
{
    double total = valorDiario * quantidadeDias + taxas;
    return total;
}

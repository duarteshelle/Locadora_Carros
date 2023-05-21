Conta { 

. Responsabilidades {

    E-mail;
    Senha;
    Alterar senha;
}

  Collaborações {
   
  }
  
}

Cliente {

  Responsabilidades {
  
    Histórico;
    Consultar histórico;
    Número de carteira de motorista;
    Fazer pedido;
    Cancelar pedido;
  }
  
  Collaborações {
  
    Conta;
    Index_Carros;
    Index_Pedidos;
    Histórico;
  }
  
}

Admin {

  Responsabilidades {
  
    Criar carros;
    Deletar carros;
    Atualizar dados de carros;
    Vizualizar index de carros;
  }
  
  Collaborações {
  
    Carro;
    Index_Carros;
  }
  
}

Carro {

. Responsabilidades {

    Marca;
    Modelo;
    Tipo;
    Data de fabricação;
    Disponibilidade;
    Características;
}

 Collaborações {
 
   Pedido;
 }
 
}

Index_Carros {

. Responsabilidades {

    Listar carros;
}

  Collaborações {
  
  }
  
}

Histórico {

. Responsabilidades {

    Listar alugeis de carros realizados;
}

  Collaborações {
  
    Pagamento;
  }
  
}

Pagamento {

 Responsabilidades {
 
   Identificar o método de pagamento;
   Alterar o status do pagamento;
 }
 
 Collaborações {
 
   Pedido;
 }
 
}

Pedido {

. Responsabilidades {

    Carro;
    Cliente;
    Período de aluguel;
    Local de retirada;
    Local de entrega;
    Mostrar pedido;
    Status do pagamento;
}

  Collaborações {
  
    Pagamento;
    Cliente;
    Carro;
  }
  
}

Index_Pedidos {

. Responsabilidades {

    Listar pedidos;
}

. Collaborações {

}

}

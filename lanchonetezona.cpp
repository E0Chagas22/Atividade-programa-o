#include <iostream>
#include <queue>
#include <string>

struct Pedido {
    int identificador;
    std::string descricao;
    double valor_total;
};

int main() {
    std::queue<Pedido> fila_de_pedidos;

    std::cout << "--- Sistema de Pedidos (FIFO) ---" << std::endl;
    std::cout << "Status: Fila de pedidos inicializada." << std::endl;
    
    std::cout << "\n## Adicionando 3 Pedidos a Fila (FIFO)" << std::endl;

    Pedido p1;
    p1.identificador = 101;
    p1.descricao = "Sanduiche de frango";
    p1.valor_total = 22.50;
    fila_de_pedidos.push(p1);
    std::cout << "-> Adicionado: ID 101 - Sanduiche de frango (R$ " << 22.50 << ")" << std::endl;
    
    Pedido p2;
    p2.identificador = 102;
    p2.descricao = "Batata frita grande";
    p2.valor_total = 12.00;
    fila_de_pedidos.push(p2);
    std::cout << "-> Adicionado: ID 102 - Batata frita grande (R$ " << 12.00 << ")" << std::endl;

    Pedido p3;
    p3.identificador = 103;
    p3.descricao = "Combo familia";
    p3.valor_total = 45.90;
    fila_de_pedidos.push(p3);
    std::cout << "-> Adicionado: ID 103 - Combo familia (R$ " << 45.90 << ")" << std::endl;

    std::cout << "\n## Proximo Pedido a ser Preparado (Front)" << std::endl;
    if (!fila_de_pedidos.empty()) {
        const Pedido& proximo = fila_de_pedidos.front();
        std::cout << "? ID: " << proximo.identificador 
                  << " | Descricao: \"" << proximo.descricao 
                  << "\" | Valor: R$ " << proximo.valor_total << std::endl;
    }
    
    std::cout << "\n## Entregando o Primeiro Pedido (Dequeue)" << std::endl;
    if (!fila_de_pedidos.empty()) {
        const Pedido& entregue = fila_de_pedidos.front();
        
        fila_de_pedidos.pop();

        std::cout << "?? Pedido #" << entregue.identificador << " entregue e removido da fila." << std::endl;
    }

    std::cout << "\n## Novo Proximo Pedido a ser Preparado (Front)" << std::endl;
    if (!fila_de_pedidos.empty()) {
        const Pedido& novo_proximo = fila_de_pedidos.front();
        std::cout << "?? ID: " << novo_proximo.identificador 
                  << " | Descricao: \"" << novo_proximo.descricao 
                  << "\" | Valor: R$ " << novo_proximo.valor_total << std::endl;
    } else {
        std::cout << "A fila esta vazia." << std::endl;
    }

    std::cout << "\n--- Fim do Processamento ---" << std::endl;
    
    return 0;
}

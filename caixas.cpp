#include <iostream>
#include <stack>
#include <string>

using namespace std;


struct Carga {
    int id_caixa;
    float peso_kg;
    string destino;
};

int main() {

    
    stack<Carga> pilha;

    
    Carga c1 = {501, 12.5, "Rio de Janeiro"};
    Carga c2 = {502, 8.3, "São Paulo"};
    Carga c3 = {503, 15.9, "Curitiba"};

    pilha.push(c1);
    pilha.push(c2);
    pilha.push(c3);  

   
    cout << "Caixa no topo da pilha:" << endl;
    cout << "ID: " << pilha.top().id_caixa << endl;
    cout << "Destino: " << pilha.top().destino << endl;
    cout << endl;

    
    cout << "Caixa " << pilha.top().id_caixa << " removida para processamento." << endl;
    pilha.pop();

    cout << "Caixa " << pilha.top().id_caixa << " removida para processamento." << endl;
    pilha.pop();

    cout << endl;

   
    cout << "Nova caixa no topo:" << endl;
    cout << "ID: " << pilha.top().id_caixa << endl;
    cout << "Destino: " << pilha.top().destino << endl;

    cout << "Tamanho atual da pilha: " << pilha.size() << endl;

    return 0;
}


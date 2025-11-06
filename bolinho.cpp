#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){

queue<string> fila_bolo;
cout << "Ingredientes de bolo" << endl;
cout << fila_bolo.empty() << endl;

fila_bolo.push("Trigo");
fila_bolo.push("Ovo");
fila_bolo.push("Leite");
fila_bolo.push("Manteiga");
fila_bolo.push("Acucar");
fila_bolo.push("Fermento");

cout << "Tamanho da fila de ingredientes: " << fila_bolo.size() << "." << endl;
string primeiro_ingrediente = fila_bolo.front();
string ultimo_ingrediente = fila_bolo.back();
cout << "Qual sera o primeiro Ingrediente da receita? " << primeiro_ingrediente<< endl;
cout << "E qual sera o ultimo Ingrediente da receita? " << ultimo_ingrediente<< endl;

fila_bolo.pop();
cout << "Apos usar o fermento quantos itens faltam: " << fila_bolo.size() << endl;
fila_bolo.pop();
cout << "Em seguida acrescentamos o ovo, o numero de ingredientes restantes sera: " << fila_bolo.size() << endl;


cout << "Agora, o novo primeiro ingrediente sera: " << fila_bolo.front();
cout << ". Enquanto o ultimo vai ser: " << fila_bolo.back() << endl;
cout << "E o tamanho da fila dos ingredientes sera: " << fila_bolo.size() << "!";


return 0;
}

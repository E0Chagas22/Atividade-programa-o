#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(){
	
	stack<string> foguetes;
	cout << "Os Foguetes que irao lancar sao: " << endl;
	
	foguetes.push("Alpha");
	cout << "Alpha" << endl;
	
	foguetes.push("Beta");
	cout << "Beta" << endl;
	
	foguetes.push("Gama");
	cout << "Gama" << endl;
	
	foguetes.push("Delta");
	cout << "Delta" << endl;
	
	cout << "O primeiro foguete que ira ser lancado e: " << foguetes.top() << endl;
	foguetes.pop();
	cout << "Primeira decolagem feita com sucesso, o proximo foguete a ser lancado sera: " << foguetes.top() << endl;
	foguetes.pop();
	cout << "Segunda decolagem feita com sucesso, o proximo foguete a ser lancado e: " << foguetes.top() << endl;
	foguetes.pop();
	cout << "Decolagem feita com sucesso, o ultimo foguete sera: " << foguetes.top() << endl;
	
}

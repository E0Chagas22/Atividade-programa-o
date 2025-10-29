#include <iostream>
#include <string>
using namespace std;

struct Feitico{
	string nome;
	int dificuldade;
	int dano_base;
	
};

int main() {

	float custo_mana_final;
	double multiplicador;

	Feitico Relampago;
	Relampago.nome = "Relampago em cadeia";
	Relampago.dificuldade = 4;
	Relampago.dano_base = 75;


	if(Relampago.dificuldade == 1 || Relampago.dificuldade == 2){
		multiplicador = 1;
		
	}else if(Relampago.dificuldade == 3 || Relampago.dificuldade == 4 ){
	multiplicador = 1.5;
	
	}else{
		multiplicador = 2;
	}
	
	custo_mana_final = Relampago.dano_base * multiplicador;
	cout<<"O nome do feitico e: " << Relampago.nome << endl;
	cout<<"A dificuldade do " << Relampago.nome << " e: " << Relampago.dificuldade << endl;
	cout<<"O dano base e de: " << Relampago.dano_base << endl;
	cout<<"E o custo final de mana e de: "<< custo_mana_final<<endl;

}


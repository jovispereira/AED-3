#include <iostream>

using namespace std;

class celula
{
private:
	string nome;
	celula * proxima;
public:
	celula(){
		proxima = NULL;
	}
	string getNome(){
		return nome;
	}
	void setNome(string n){
		nome = n;
	}
	~celula(){
		cout << "Passou no metodo destrutor";
	}	
};
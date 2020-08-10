//Aluno: João Vitor da Silva Pereira
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
	celula(string n){
		nome = n;
	}
	 //Fiz com a ajuda da aula pois estava com dúvidas.
	celula(string n, celula *p){
		nome = n;
		proxima = p;
	}
	
	string getNome(){
		return nome;
	}
	void setNome(string n){
		nome = n;
	}
	
	celula * getProxima(){
		return proxima;
	}
	
	void setProxima(celula * l){
		proxima = l;
	}
};


class lista
{
private:
	celula * inicio;
	
public:
	lista(){
		inicio = NULL;
	}
	
	lista(celula *i){
		inicio = i;
	}
	
	celula * getInicio(){
		return inicio;
	}
	
	void inserirInicio(string n){
		celula *nova = new celula;
		nova->setNome(n);
		nova->setProxima(inicio);
		inicio = nova;
	}
	
	void inserirFim(string n){
		celula *nova = new celula(n);
		nova->setProxima(NULL);
		if(inicio != NULL)
		{			
			celula *aux = inicio;
			while(aux->getProxima() != NULL)
			{
				aux = aux->getProxima();
			}
			aux->setProxima(nova);
		}
		else{
			inicio = nova;
		}
	}
	
	void imprimir(){
		if(inicio == NULL){
			cout << "Lista vazia.\n";
		}
		else{
			celula *aux = inicio;
			while(aux != NULL){
				cout << aux->getNome() << endl;
				aux = aux->getProxima();
			}
		}
	}
};

int main(){
	lista listaAlunos;
	listaAlunos.inserirFim("Joao");
	listaAlunos.inserirFim("Maria");
	listaAlunos.inserirFim("Jose");
	listaAlunos.inserirInicio("Miguel");
	listaAlunos.imprimir();
	return 0;
}
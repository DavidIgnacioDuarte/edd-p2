#include <cstdlib>
#include "Lista.h"

//Implementación que incluya el ".h"
//Biblioteca <cstdlib> incluye comando "NULL"

struct Nodo {

	int valor;
	Nodo* siguiente;

};

struct ListaRepr {

	Nodo* primero; //si es vacía, es puntero null

};

Lista vaciaL() {

	Lista ls = new ListaRepr;
	ls->primero = NULL;
	return ls;

}


Lista consL(int x, Lista xs) {

	Nodo* p = new Nodo;
	p->valor = x;
	p->siguiente = xs->primero;

	//Lista res = new ListaRepr;
	//res->primero = p;
	xs->primero = p; 

	return xs;

}


bool esVaciaL(Lista xs) {

	return xs->primero == NULL; 

}


int headL(Lista xs) {

	return xs->primero->valor;

}


Lista tailL(Lista xs) {

	Lista res = new ListaRepr;
	res->primero = xs->primero->siguiente;

	return res;

}






















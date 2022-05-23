#include <cstdlib>

#include "Lista.h"

///INVARIANTES
// Una lista se representa con un puntero a ListaRepr
// que nunca es NULL.

struct Nodo {

	Elem valor;
	Nodo* siguiente;

};

struct ListaRepr {

	Nodo* primero;

};


Lista vaciaL() {

	Lista l = new ListaRepr;
	l->primero = NULL;
	return l;

}


void agregarAlPrincipioL(Lista l, Elem x) {

	Nodo* p = new Nodo; //p es un puntero a Nodo! 
						//se reserva un espacio en la memoria para guardar
						//un nodo.
	p->valor = x; //asigna el valor del nuevo nodo = "x"
	p->siguiente = l->primero; //El siguiente del nuevo nodo será la lista dada.
	l->primero= p; //El primero de la lista dada será el nodo P con el valor x,
				   //entonces ya queda el elemento al principio.

}


int longitud(Lista l) {

	int res = 0;
	Nodo* p = l->primero;
	while( p != NULL) {
		res ++;
		p = p->siguiente;
	}	
	return res;

}


Elem iesimoL(Lista l, int i) {

	Nodo* p = l->primero;
	for(int j = 0; j < i; j++) {
		p = p->siguiente;
	}
	return p->valor;

}


void destruirL(Lista l) {

	Nodo* p = l->primero;
	while(p != NULL) {
		Nodo* q = p->siguiente;
		delete p;
		p = q;
	}
	delete l; 

}




















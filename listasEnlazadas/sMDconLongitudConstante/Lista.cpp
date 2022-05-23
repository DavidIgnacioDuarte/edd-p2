#include <cstdlib>

#include "Lista.h"

///INVARIANTES
// Una lista se representa con un puntero a ListaRepr
// que nunca es NULL.
//Si l es una lista, el campo l->tam, este es exactamente la longitud de la ls.

struct Nodo {

	Elem valor;
	Nodo* siguiente;

};

struct ListaRepr {

	Nodo* primero;
	int length;

};


Lista vaciaL() {

	Lista l = new ListaRepr;
	l->primero = NULL;
	l->length=0;
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
	l->length++;

}

//YA ES O(1)
int longitud(Lista l) {

	return l->length;

}


Elem iesimoL(Lista l, int i) {

	Nodo* p = l->primero;
	for(int j = 1; j < i; j++) {
		p = p->siguiente;
	}
	return p->valor;

}

//para evitar Memory leak.(perdida de memoria)
//Se reservan recursos y no se devuelven a la memoria.
//LIBERAR LA MEMORIA:
//Cuando termino de usar una lista, la destruyo.
void destruirL(Lista l) {

//Debo destruir cada nodo

	Nodo* p = l->primero; //Inicializo el recorrido para destruir la lista
	while(p != NULL) { //Condición hasta que esté eliminada
		Nodo* q = p->siguiente; //Guardo el siguiente en otra variable, ya que luego
						//eliminaré p y perderé su referencia.
		delete p; //Delete sobre el nodo inicializado previamente
		p = q; //Para seguir el mismo proceso con el primer nodo eliminado
	}
	delete l; 

}


//NUEVAS OPERACIONES

Elem sacarPrimero(Lista l) {

	Elem valor = l->primero->valor;
	Nodo* p = l->primero;
	l->primero = l->primero->siguiente;
	l->length--;
	delete p;

	return valor; //retorna el valor que sacó, y la lista queda sin el mismo.

}

//Contemplar 2 casos:
// 1)La lista es vacía (agregarlo al primero)
// 2)La lista no es vacía(entonces hay un último nodo y hay que engancharlo)
void agregarAlFinalL(Lista l, Elem x) {

	Nodo* n = new Nodo; //nuevo nodo que asignará al final
	n->valor = x;
	n->siguiente = NULL;
	l->length++;
	if(l->primero == NULL) {
		//La lista es vacía
		l->primero = n;
	} else {
		//La lista no es vacía
		Nodo* p = l->primero;
		while(p->siguiente != NULL) {
			p = p->siguiente;
		}
		//cuando termina el while, p es el último nodo de la lista
		p->siguiente = n;
	}

}


Elem sacarUltimo(Lista l) {

	Elem res = l->primero->valor;
	l->length--;
	if(l->primero->siguiente == NULL) {
		//La lista tiene un solo elemento, y estoy borrando justamente el único
		//elemento que le queda.
		delete l->primero;
		l->primero = NULL;
	} else {
		//La lista tiene mas de un elemento y hay que buscarlo, recorriendo.
		Nodo* p = l->primero;
		while(p->siguiente->siguiente != NULL) {
			p = p->siguiente;
		}
		//Ahora p es el anteúltimo nodo de la lista, y si siguiente == NULL.
		res = p->siguiente->valor;
		delete p->siguiente;
		p->siguiente = NULL;
	}
	return res;

}

//EXTENDER CON
//void agregarIesimoL(Lista l, Elem x, int i);
//Elem sacarIesimoL(Lista l, int i);


void agregarIesimoL (Lista l, Elem x, int i) {

	l->length++;
	Nodo* ls = l->primero;
	for(int j=2; j<i; j++) {
		ls = ls->siguiente;
	}
	Nodo* xs = ls->siguiente; //Se arma otra referencia para no modificar ls.
	Nodo* n = new Nodo;
	n->valor=x;
	n->siguiente=ls->siguiente;
	ls->siguiente = n;

}


Elem sacarIesimoL(Lista l, int i) {

	l->length--;
	Nodo* ls = l->primero;
	for(int j=2; j<i; j++) {
		ls = ls->siguiente;
	}
	Nodo* res = ls->valor; 
	Nodo* sig = ls ->siguiente->siguiente;
	ls->siguiente = sig;

	return res;

}














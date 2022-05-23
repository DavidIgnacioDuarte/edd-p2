#include "arrayList.h"

/*
 ArrayLists VS Listas Enlazadas
-------------------------------
ACCEDER AL I-ÉSIMO ELEMENTO:
 - En una lista enlazada tiene costo lineal.
 - En una arrayList va a tener costo constante. <- 

AGREGAR UN ELEMENTO:
 - En una lista enlazada tiene costo constante. <-
 - En una arrayList tiene costo lineal.

*/

//INV REP=
// La capacidad representa el tamaño total del arreglo elementos.
// 0 <= longitud && longitud <= capacidad.
// capacidad > 0 && capacidad es potencia de 2.

struct arrayListSt {

	int longitud;
	int capacidad;
	Elem* elementos;

};


Lista nuevaL() {

	Lista resList      = new arrayListSt;
	resList->longitud  = 0;
	resList->capacidad = 1;
	resList->elementos = new Elem[1];
	return resList;

}


void agregarL(Lista l, Elem x) {
//IDEA 1=
// 1) Crear un nuevo arreglo con capacidad para guardar todos los elementos;
// 2) Copiar los elementos del arreglo original al nuevo;
// 3) Incrementar la longitud y capacidad;
// 4) Borrar el viejo arreglo;
// 5) Modificar el arreglo de elementos para que refiera al nuevo.
//IDEA 2=
// Ir duplicando el tamaño del arreglo.

	if ( l->longitud == l->capacidad ) { //Arreglo lleno. Hay que redimensionar.
		Elem* nuevoArray = new Elem[l->capacidad * 2]; //(1)
		for(int i=0; i<l->longitud; i++) {
			nuevoArray[i] = l->elementos[i]; // (2)
		}
		l->capacidad = l->capacidad * 2; // (3) CON IDEA2.
		delete [] l->elementos; // (4) Sintaxis para borrar el arreglo. 
		l->elementos = nuevoArray; // (5)
	}
	l->elementos[l->longitud] = x; //Agrego el Elem.
	l->longitud++; // (3)

}


int longitudL(Lista l) {

	return l->longitud;

}


Elem iesimoL(Lista l, int i) {

	return l->elementos[i];

}


void destruirL(Lista l) {

	delete [] l->elementos;

}






















#ifndef _LISTA_H_
#define _LISTA_H_

//LISTA ENLAZADA DESTRUCTIVA/MUTABLE = 
// Voy a tener una operación que va a modificar la lista, como si fuera
// un efecto. (no crea una nueva como la inmutable)

typedef struct ListaRepr* Lista;
typedef int Elem;

//EFICIENCIA: O(1)
Lista vaciaL();

//EFICIENCIA: O(1)
void agregarAlPrincipioL(Lista l, Elem x);

//EFICIENCIA: O(1) independientemente de los elementos que tiene la lista.
int longitud(Lista l);

//EFICIENCIA: O(i) [lineal], a lo sumo O(n) si la lista tiene n elementos.
Elem iesimoL(Lista l, Elem i); //PREC: 0 <= i < longitudL(l)


void destruirL(Lista l); //libero memoria.

//NUEVAS OPERACIONES

//EFICIENCIA: O(1)
//PREC: La lista no debe ser vacía.
Elem sacarPrimero(Lista l);

//EFICIENCIA: O(n) si la lista tiene n elementos.
void agregarAlFinalL(Lista l, Elem x);

//PREC: La lista no debe ser vacía.
Elem sacarUltimo(Lista l);

//PREC: i <= length l 
void agregarIesimoL(Lista l, Elem x, int i);

//PREC: i <= length l
//Elem sacarIesimoL(Lista l, int i);

#endif



/*
g++ -o main Lista.cpp main.cpp
main
*/









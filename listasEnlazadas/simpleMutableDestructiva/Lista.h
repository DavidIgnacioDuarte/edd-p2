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

//EFICIENCIA: O(n) si la lista tiene n elementos
int longitud(Lista l);

//EFICIENCIA: O(i) [lineal], a lo sumo O(n) si la lista tiene n elementos.
Elem iesimoL(Lista l, Elem i); //PREC: 0 <= i < longitudL(l)


void destruirL(Lista l); //libero memoria.


#endif









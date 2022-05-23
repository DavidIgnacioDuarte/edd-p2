#ifndef _LISTA_H_ 
#define _LISTA_H_


typedef struct arrayListSt* Lista;
typedef int Elem; 


Lista nuevaL();


void agregarL(Lista l, Elem x);


int longitudL(Lista l);

//PREC: 0 <= i < longitud(l).
Elem iesimoL(Lista l, int i);


void destruirL(Lista l);



#endif
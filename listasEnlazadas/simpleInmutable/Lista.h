#ifndef _LISTA_H_
#define _LISTA_H_
//BUROCRACIA SINTÁCTICA PARA MOSTRAR EN PANTALLA
//El ifndef evita que, al tener otro archivo ".h" el código aparezca duplicado.

//PARA COMPILAR
//typedef char Lista;


typedef struct ListaRepr* Lista;


Lista vaciaL();
Lista consL(int x, Lista xs);
bool esVaciaL(Lista xs);
int headL(Lista xs); //PREC: No es vacía
Lista tailL(Lista xs); //PREC: No es vacía









#endif






























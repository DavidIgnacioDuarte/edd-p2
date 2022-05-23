#include <iostream>
#include "Queue.h"

using namespace std;

// operaciones: O(n)
// espacio: O(1)
int sumQ(Queue q) {
    int res = 0;

    inicializarRecorrido(q);
    while(!terminoElRecorrido(q)) {
        res = res + obtenerElementoActual(q);
        pasarAlSiguienteElemento(q);
    }

    return res;
}

int main()
{
   /* Queue q = emptyQ();
    for(int i = 0; i < 10; i++) {
        enqueue(i, q);
    }
    printQ(q);
    cout << "sumQ: " << sumQ(q) << endl;
    printQ(q);
    return 0;*/
    Queue q;
    destroyQ(q);
}

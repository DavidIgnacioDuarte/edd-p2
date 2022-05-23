#include <iostream>
#include "queue.h"
#include "stack.h"
#include "tree.h"

using namespace std;

// operaciones: O(n)
// espacio: O(log n) sii el arbol está balanceado
// espacio: O(n) si el arbol no está balanceado
int sumTR(Tree t) { //SUMATORIA VERSION RECURSIVA
    if(isEmptyT(t)) {
        return 0;
    } else {
//        cout << "root: " << rootT(t) << endl;
        return rootT(t) + sumTR(leftT(t)) + sumTR(rightT(t));
    }
}


//Breadth First Search ( recorrido en anchura sobre el árbol );
// El consumo de memoria va a estar dado por la queue, la cantidad de nodos 
// que tenga como máximo.
int sumBFS(Tree t) {
    if (isEmptyT(t)) {
        return 0;
    }
    int resultado = 0;
    Queue pendientes = emptyQ();
    Tree actual = t;
    enqueue(actual, pendientes);
    while(!isEmptyQ(pendientes)) {
        // obtengo el arbol actual
        actual = firstQ(pendientes);

//        cout << "root: " << rootT(actual) << endl;

        // proceso la raiz actual
        resultado = resultado + rootT(actual);

        // lo quito porque ya está procesado
        dequeue(pendientes);

        // pasar al siguiente elemento

        //SE USA MEMORY HEAP Y NO STACK. MENOS STACKOVERFLOW!!
        // encolo el left si no es emptyT
        if (!isEmptyT(leftT(actual))) {
            enqueue(leftT(actual), pendientes);
        }

        // encolo el right si no es emptyT
        if (!isEmptyT(rightT(actual))) {
            enqueue(rightT(actual), pendientes);
        }
    }
    return resultado;
}



int sumDFS(Tree t) {
    if (isEmptyT(t)) {
        return 0;
    }
    int resultado = 0;
    Stack pendientes = emptyS();
    Tree actual = t;
    push(actual, pendientes);
    while(!isEmptyS(pendientes)) {
        // obtengo el arbol actual
        actual = top(pendientes);

//        cout << "root: " << rootT(actual) << endl;

        // proceso la raiz actual
        resultado = resultado + rootT(actual);

        // lo quito porque ya está procesado
        pop(pendientes);

        // pasar al siguiente elemento

        // apilo el right si no es emptyT
        if (!isEmptyT(rightT(actual))) {
            push(rightT(actual), pendientes);
        }

        // apilo el left si no es emptyT
        if (!isEmptyT(leftT(actual))) {
            push(leftT(actual), pendientes);
        }
    }
    return resultado;
}

int main()
{
    // version imperativa de creacion
//    Tree t1  = leafT(1);
//    Tree t2  = leafT(2);
//    Tree t3  = leafT(3);
//    Tree t4  = leafT(4);
//    Tree t5  = leafT(5);
//    Tree t6  = leafT(6);
//    Tree t7  = leafT(7);
//
//    setLeftT(t1, t2);
//
//    setLeftT(t2, t4);
//    setRightT(t2, t5);
//
//    setRightT(t1, t3);
//
//    setLeftT(t3, t6);
//    setRightT(t3, t7);

    // version funcional de creacion
    Tree t1 = nodeT(
      1,
        nodeT(2, leafT(4), leafT(5)),
        nodeT(3, leafT(6), leafT(7))
    );

    int sr1 = sumTR(t1);
    int sbfs1 = sumBFS(t1);
    int sdfs1 = sumDFS(t1);
    cout << "sum sr1: " << sr1 << endl;
    cout << "sum sbfs1: " << sbfs1 << endl;
    cout << "sum sdfs1: " << sdfs1 << endl;
    return 0;
}

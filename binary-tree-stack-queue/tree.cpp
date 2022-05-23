#include <iostream>
#include "tree.h"

using namespace std;

Tree emptyT() {
    return NULL;
}

bool isEmptyT(Tree t) {
    return t == NULL;
}

Elem rootT(Tree t) {
    return t->root;
}

Tree leftT(Tree t) {
    return t->left;
}

Tree rightT(Tree t) {
    return t->right;
}

void setRootT(Elem x, Tree t) {
    t->root = x;
}

// Prec.: el lado izquierdo debe ser emptyT();
void setLeftT(Tree t, Tree left) {
    t->left = left;
}

// Prec.: el lado derecho debe ser emptyT();
void setRightT(Tree t, Tree right) {
    t->right = right;
}


Tree leafT(Elem x) {
    return nodeT(x, emptyT(), emptyT());
}

Tree nodeT(Elem x, Tree left, Tree right) {
    NodeT* newNode = new NodeT;
    newNode->root = x;
    newNode->left = left;
    newNode->right = right;
    return newNode;
}

// Prec.: la memoria de todos los nodos del arbol
// no fue previamente liberada
void destroyT(Tree t) {

    Tree tmp = t;
    if(not isEmptyT(tmp)) {
        if(not isEmptyT(tmp -> left)) {
            Tree tmpLeft = tmp -> left; 
            newLeftTmp = tmpLeft;
            destroyT(newLeftTmp)
        }
        if(not isEmptyT(tmp -> right)) {
            Tree tmpRight = tmp -> right; 
            newRightTmp = tmpRight;
            destroyT(newRightTmp)
        }
        delete rootT(tmp);
    }

}

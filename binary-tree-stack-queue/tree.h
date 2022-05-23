#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef int Elem;

struct NodeT {
    Elem root;
    NodeT* left;
    NodeT* right;
};

typedef NodeT* Tree;

Tree emptyT();
bool isEmptyT(Tree t);
Tree leafT(Elem x);
Tree nodeT(Elem x, Tree left, Tree right);
Elem rootT(Tree t);
Tree leftT(Tree t);
Tree rightT(Tree t);
void setRootT(Elem x, Tree t);

// Prec.: el lado izquierdo debe ser emptyT();
void setLeftT(Tree t, Tree left);

// Prec.: el lado derecho debe ser emptyT();
void setRightT(Tree t, Tree right);

// Prec.: la memoria de todos los nodos del arbol
// no fue previamente liberada
void destroyT(Tree t);

#endif // TREE_H_INCLUDED

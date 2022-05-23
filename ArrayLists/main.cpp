#include <iostream>
using namespace std;

#include "arrayList.h"

int main() {

	Lista l = nuevaL();
	agregarL(l, 10);
	agregarL(l, 20);
	agregarL(l, 30);
	agregarL(l, 40);
	for(int i = 0; i < longitudL(l); i++) {
		cout << iesimoL(l, i) << endl;
	}
	destruirL(l);
	return 0;

}
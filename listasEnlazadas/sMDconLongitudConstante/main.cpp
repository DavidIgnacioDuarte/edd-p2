#include <iostream>
using namespace std;

#include "Lista.h"

int main() {

	Lista l = vaciaL();

	agregarAlPrincipioL(l, 30);
	agregarAlPrincipioL(l, 20);
	agregarAlPrincipioL(l, 10);

	agregarAlFinalL(l, 40);
	agregarAlFinalL(l, 50);
	agregarAlFinalL(l, 60);

	sacarIesimoL(l, 3);

	//cout << sacarUltimo(l) << endl;
	//cout << longitud(l) << endl;
	cout << iesimoL(l, 3) << endl;

	destruirL(l);

	return 0;
}
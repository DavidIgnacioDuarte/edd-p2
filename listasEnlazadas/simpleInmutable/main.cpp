#include <iostream>
using namespace std;

#include "Lista.h"

int main() {

	Lista l = vaciaL();

	consL(30, l);
	consL(20, l);
	consL(10, l);

	cout << esVaciaL(l) << endl;
	cout << headL(l) << endl;

	return 0;
}
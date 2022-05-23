#include <iostream> //burocracia sintáctica para mostrar algo en pantalla
using namespace std;

//PARA COMPILAR
//g++ prueba.cpp -o prueba.exe
//./prueba.exe

/*
int main() {

	//mostrar(42 * 2);
	cout << 42 * 2 endl; //muestra resultado de expresión en pantalla
						 //endl==endline (se pone al final de la linea como "Enter")
	cout << 42 * 3 endl;
	cout << 42 * 4 endl;


	return 0;

}
*/

int main() { //función main como una lista de comandos en secuencia.

	cout << g( f(g(2 * cuatro()), 1) ) << endl;

	return 0; //RETURN SIEMPRE NECESARIO.

}

//EN G++
// g++ prueba.cpp -o prueba.exe
// ./prueba.exe

int cuatro() {
	return 4;
}

int f(int x, int y) {
	return 2 * x + 3 * y;
}

int g(int x) {
	return x + 2;
}

int maximo(int x, int y) {

int resultado = x; //OBLIGATORIA DECLARACION DE VARIABLE A DEVOLVER

	if (x < y) {
		resultado = y;
	}
	return resultado;

}

int sumaNumeros(int desde, int hasta) {

int resultado = 0; //CONTADOR 
int i = desde; 
	while(i <= hasta) {
		resultado = resultado + i; 
		i = i + 1;
	}
	return resultado;

}

//FOR (repeticion)/////////////////////////////////////////////////////////////
int main() {

	int i; //declaracion arriba
	for(i = 0; i < 100; i = i + 1) {
		cout << i << endl;
	}
	return 0;

}
//OR
int main() {

	for(int i = 0; i < 100; i = i + 1) { //declaracion en la repeticion
		cout << i << endl;
	}
	return 0;

}



bool todosLindos(int desde, int hasta) {
	bool res = true; //CASO BASE
	for(int i = desde; i <= hasta; i++) {
		res = res && esLindo(i);
	}
	return res;
}

bool esLindo(int x) {
	//EJ
	return x * x - 3 * x + 18 < 104
}































//PROP:
// Guarda en el array c la suma componente a componente de los arrays a y b.
// "n" supone el tamaño de cada arreglo.
void sumar(int n, int* a, int* b, int* c) {

	for(int i=0; i<n; i++) {
		c[i] = a[i] + b[i];
	}

}


//PROP:
// Devuelve True si los elementos del arreglo a están ordenados de menor a mayor.
bool estaOrdenado(int n, int*a) {

	bool res = true;
	for(int i=0; i<n-1; i++ ) {
		res = res && (a[i] < a[i+1]);
	}
	return res;

}


void reverse(int n, int* a) {

	int resToReverse = n-1;
	for(int i=0; i<n/2; i++) {
		intercambiar(a, i, n - 1 - i);
	}

}

//PREC:
// i y j son índices válidos del array "a".
void intercambiar(int* a, int i, int j) {

	int iValue = a[i]; //me guardo el valor del índice
	a[i] = j; 
	a[j] = iValue; 

}


int promedio(int n, int* a) {

	sum = 0;
	for(i=0; i<n; i++) {
		sum = sum + a[i];
	}
	return sum / n;

}


int cuantosMayoresQue(int x, int n, int* a) {

	int res = 0;
	for(i=0; i<n; i++) {
		if(a[i] > x) { res++; }
	}
	return res;

}



int main() {

	int a[4];
	a[0] = 10;
	a[1] = 20;
	a[2] = 30;
	a[3] = 40;

	return 0;
}
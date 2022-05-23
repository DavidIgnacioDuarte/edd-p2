/*
Suponiendo que contamos con una funcion nroBolitas(i, j) que nos dice la cant
de bolitas que hay en la celda ubicada en la columna i en la fila j del tablero,
donde 0 <= i < ancho y 0 <= j < alto, definir:
*/

int nroBolitas(int i, int j) {
	//Todavía no hecha
	return 9; //Supongo que el tablero tiene 9 bolitas en cada celda.
}

int cantidadBolitasTotales(int ancho, int alto) {

	int res = 0;
	for(int j=0, j<alto; j++) {
		res = res + nroBolitasEnFila(ancho, j);
	}
	return res

}

//PROP 
// Dado el ancho del tablero y un numero de fila j, donde 0 <= j < alto, 
// devuelve la cantidad de bolitas en total que hay en esa fila.
int nroBolitasEnFila(int ancho, int j) {
	int res = 0;
	for(int i=0, i < ancho, i++) {
		res = res + nroBolitas(i, j);
	}
	return res
}


//PROP
// Devuelve el indice de la fila que tiene mayor cantidad de bolitas.
//PREC
// El alto del tablero debe ser > 0. Debe haber al menos 1 fila.
int filaConMasBolitas(int ancho, int alto) {

	int filaMasNumerosa = 0;
	for(int j=0; j<alto; j++) {
		if(nroBolitasEnFila(ancho, j) > nroBolitasEnFila(ancho, filaMasNumerosa)) {
			filaMasNumerosa = j;
		}
	}
	return filaMasNumerosa;

}


//PROP
// Devuelve True si hay una fila que tiene mayor cantidad de bolitas que n
bool hayFilaPesada(int ancho, int alto, int n) {

	bool hayPesada = false;
	for(int j=0; j<alto; j++) {
		hayPesada = hayPesada ||
					(nroBolitasEnFila(ancho, j) > n);
	}
	return hayPesada;

}


bool todasFilasPesadas(int ancho, int alto, int n) {

	bool todasPesadas = true;
	for(int j=0; j<alto; j++) {
		todasPesadas = todasPesadas && 
					  (nroBolitasEnFila(ancho, j) > n);
	}
	return todasPesadas;

}
































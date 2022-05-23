typedef int Dir; 

Dir norte() { return 0; }
Dir este() { return 1; }
Dir sur() { return 2; }
Dir oeste() { return 3; }

Dir siguiente(Dir d) {
	return (d+1) % 4;
}


struct Coordenada {
	int x;
	int y;
};

//USO DE REGISTROS

int main() {
	Coordenada c = nuevaCoordenada(18, 20);
	int z = c.x * c.y;
	cout << z << endl;
	return 0;
}


Coordenada nuevaCoordenada(int x, int y) {
	Coordenada c;
	c.x = x;
	c.y = y; 
	return c;
}



//PROP
// Devuelve la coordenada resultante de desplazarse hacia la direccion d,
// partiendo desde la coordenada c,
Coordenada desplazar(Coordenada c, Dir d) {

	Coordenada res = c; 
	if(d == norte()) {
		res.y++;
	}
	else if(d == sur()) {
		res.y--;
	}
	else if(d == este()) {
		res.x++;
	}
	else { res.x--; }
	return res;

}



//TABLERO/////////////////////////////////////////////////////////////////////
//Como tipo abstracto (TAD)

//Representacion privada(implementador)
//IMPLEMENTAR EL STRUCT ANTES DE LA INTERFAZ

struct Tablero {
	int ancho;
	int alto;
	Coordenada cabezal;
}


//Interfaz pública(usuario)

Tablero nuevoT(int ancho, int alto) {
	Tablero res;
	res.ancho = ancho;
	res.alto = alto;
	res.cabezal = nuevaCoordenada(0,0);
	return res;
}

bool puedeMoverT(Tablero t, Dir d) {
	Coordenada destino = desplazar(t.cabezal, d);

	return
	destino.x >= 0 &&
	destino.x < t.ancho && 
	destino.y >= 0 &&
	destino.y < t.alto;
}

Tablero moverT(Tablero t, Dir d) {

	Tablero res = t;
	res.cabezal = desplazar(t.cabezal, d)
	return res;

} 


//USUARIO DEL TABLERO////////////////////////////////////////////////////////

//Indica si el cabezal puede moverse n veces hacia la direccion d.
//PREC: n >= 0
bool puedeMoverN(Tablero t, int n, Dir d) {

	bool res = true;
	for(int i=0; (i < n && res); i++) { //CORTA el For!!
		if(puedeMoverT(t, d)) {
			t = moverT(t, d); //solo modifica la variable.
		} else { res = false; }
	}
	return res;

}


//PROP
// Devuelve el tablero que resulta de moverse n veces hacia la dir d.
//PREC
// n >= 0 && puedeMoverN(t, n, d)
bool moverN(Tablero t, int n, Dir d) {

	for(int i=0; i<n; i++) {
		t = moverT(t, d);
	}
	return t;

}



























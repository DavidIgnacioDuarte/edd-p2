// Para usar cout y el tipo string
#include <iostream>
#include "persona.h"

using namespace std;

// Operacional: O(1)
// Espacial: O(1) [EN MEMORIA]
int sucesor(int n) {
	return n+1;
}

// Operacional: O(n) donde n es el argumento dado.
// Espacial: O(1) [no se produce ningún callStack de alguna otra función]
int sumatoria(int n) {
	int res = 0;
	while(n > 0) {
		res = res + n;
		n = n - 1;
	}
	return res;
}

/*
En Haskell
sumN 0 = 0
sumN n = n + sumN (n-1)
*/


// - RECURSIÓN NO RECOMENDADA - [lineal siempre a nivel de memoria Stack(limitada)]
// Operacional: O(n) donde n es el argumento dado.
// Espacial: O(n) donde n es el argumento dado.[n callStacks de la misma función]
int sumN(int n) {
	if(n == 0) {
		return 0;
	} else {
		return n + sumN(n-1);
	}
}

int main() {
	Persona pers1 =
	  nuevaPersona(32, "jorge");
	Persona pers2 =
	  nuevaPersona(26, "maria");
    Mascota firu =
      nuevaMascota("pastor aleman", "firulais");
    asignarMascota(pers1, firu);
    asignarMascota(pers2, firu);
    mostrarPersona(pers1);
    mostrarPersona(pers2);
    mostrarMascota(obtenerMascota(pers1));
    mostrarMascota(obtenerMascota(pers2));
    cambiarNombre("rocko", firu);
    mostrarMascota(obtenerMascota(pers1));
    mostrarMascota(obtenerMascota(pers2));
    Persona pers3;
    while(true) {
       pers3 = nuevaPersona(32, "jorge");
       destroyPersona(pers3);
    }
	return 0; // todo ok
}

// Parte de Haskell
// Modelo de alto nivel:
// Modelo de memoria implicito
// Modelo de cómputo también implícito

// Parte C++
// Modelo de bajo nivel:
// Modelo de memoria explícito
// Modelo de cómputo explícito

/*
Modelo de puro de Haskell
- Definimos funciones
- Un programa es descripción ejecutable
- La ejecución de un programa
  transforma unas expresiones por otras
- El objetivo de un programa
  es devolver una expresión
  como resultado final
- Predominan las funciones
  y las expresiones puras
*/

/*
Modelo destructivo de C++
- Definimos funciones y procedimientos
  que producen (o pueden producir) efectos
- Un programa es un descripción ejecutable
- La ejecución de un programa
  va a consistir en modificar
  el estado de la memoria
- El objetivo de un programa
  es modificar la memoria para
  dejar almacenado ahí algún
  resultado
- Predominan los procedimientos
  y variable
*/


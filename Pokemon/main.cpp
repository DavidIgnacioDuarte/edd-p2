#include <iostream>
#include "entrenador.h"
#include <string>

using namespace std;

int main() {

	Entrenador ash    = mkEntrenador("Ash");
	Pokemon bulbasaur = mkPokemon("Bulbasaur", PLANTA);
	Pokemon charizard = mkPokemon("Charizard", FUEGO);
	Pokemon squirtle  = mkPokemon("Squirtle", AGUA);
	Pokemon arcanine  = mkPokemon("Arcanine", FUEGO);
	Pokemon ninetales = mkPokemon("Ninetales", FUEGO);

	Entrenador misty  = mkEntrenador("Misty");
	Entrenador brook  = mkEntrenador("Brook");

	capturar(ash, bulbasaur);
	capturar(ash, charizard);
	capturar(misty, squirtle);
	capturar(brook, arcanine);

	Entrenador red   = mkEntrenador("Red");

	Entrenador* equipoWea = new Entrenador[3];
	equipoWea[0] = ash;
	equipoWea[1] = misty;
	equipoWea[2] = brook;


	Pokemon* nuevaPokedeck = concatPokemon(equipoWea, 3);

	while(true) {
		Entrenador n = mkEntrenador("n");
		capturar(n, ninetales);
		destroyEntrenador(n);
	}


	capturarTodos(red, nuevaPokedeck, 4);

	cout << cantPokemones(red) << endl;
	cout << cantPokemonesDe(red, FUEGO) << endl;

	cout << esMaestro(red) << endl; // 1 true, 0 false
	cout << esMaestro(ash) << endl; 
	cout << esMaestro(brook) << endl; 


	/*
	capturar(ash, bulbasaur);

	cout << cantPokemones(ash) << endl;
	capturar(ash, charizard);
	cout << cantPokemones(ash) << endl;

	cout << cantPokemonesDe(ash, FUEGO) << endl;

	capturar(ash, charizard);
	capturar(ash, charizard);

	cout << cantPokemones(ash) << endl;
	cout << cantPokemonesDe(ash, FUEGO) << endl;
	*/

	return 0;

}
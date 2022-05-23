#include <iostream>
#include <string>
#include "pokemon.h"


struct PokemonSt {

	string nombre;
	TipoDePokemon tipoDePokemon;
	int porcentajeDeEnergia;

};


Pokemon mkPokemon(string nombre, TipoDePokemon tipoDePokemon){
	PokemonSt* res = new PokemonSt;
	res->nombre = nombre;
	res->tipoDePokemon = tipoDePokemon;
	res->porcentajeDeEnergia = 100;
    return res;
}

// indica si el pokemon es de dicho tipo
bool esTipoDePokemon(Pokemon pokemon, TipoDePokemon tipoDePokemon){

    return tipoDePokemon == pokemon->tipoDePokemon;

}

bool superaA(Pokemon primero, Pokemon segundo){
    
    return
	(primero->tipoDePokemon == AGUA && segundo->tipoDePokemon == FUEGO) || 
	(primero->tipoDePokemon == FUEGO && segundo->tipoDePokemon == PLANTA) ||
	(primero->tipoDePokemon == PLANTA && segundo->tipoDePokemon == AGUA);

}

void destroyPokemon(Pokemon pokemon){

	delete pokemon;

}

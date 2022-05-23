#include <iostream>
#include <string>

using namespace std;

//ESTE ARCHIVO ES EL HEADER DE "pokemon.cpp", A LO QUE AQUEL QUE USA ESTE MÓDULO 
//PUEDE ACCEDER.
//SÓLO DEFINICIONES QUE SE USAN EN EL TIEMPO DE COMPILACIÓN.

struct PokemonSt;
typedef PokemonSt* Pokemon; //Puntero a PokemonStruct, para saber cuánto de memoria
							//alocar.

typedef std::string TipoDePokemon;

#define AGUA "AGUA" //Asociaciones con su cadena de String y TipoDePokemon.
#define FUEGO "FUEGO"
#define PLANTA "PLANTA"

Pokemon mkPokemon(string nombre, TipoDePokemon tipoDePokemon);

// Dados dos pokemon indica si el primero, en base al tipo, es superior al segundo. Agua
// supera a fuego, fuego a planta y planta a agua. Y cualquier otro caso es falso.
bool superaA(Pokemon primero, Pokemon segundo);

// indica si el pokemon es de dicho tipo
bool esTipoDePokemon(Pokemon pokemon, TipoDePokemon tipoDePokemon);

// Dados dos pokemon libera la memoria ocupada por el mismo
void destroyPokemon(Pokemon pokemon);
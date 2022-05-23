#include <iostream>
#include <string>
#include "pokemon.h"

using namespace std;

struct EntrenadorSt;
typedef struct EntrenadorSt* Entrenador;

// contruye un entrenador
Entrenador mkEntrenador(string nombre);

// Agrega dicho pokemon a la lista del entrenador
void capturar(Entrenador entrenador, Pokemon pokemon);

// Devuelve la cantidad de pokemon que posee el entrenador.
int cantPokemones(Entrenador entrenador);

// Devuelve la cantidad de pokemon de determinado tipo que posee el entrenador.
int cantPokemonesDe(Entrenador entrenador, TipoDePokemon tipoDePokemon);

// Dada una array de entrenadores devuelve la concatenacion de todos sus pokemon.
Pokemon* concatPokemon(Entrenador* entrenadores, int cantidadEntrenadores);

// Dado un entrenador, devuelve True si posee al menos un pokemon de cada tipo posible.
bool esMaestro(Entrenador entrenador);

// Dado un entrenador libera la memoria ocupada por el mismo
void destroyEntrenador(Entrenador entrenador);

//NUEVAS////////////////////////////////////////

int capacidadPokedecks(Entrenador* entrenadores, int cantidadEntrenadores);

Pokemon iesimo(Entrenador entrenador, int indice);

void capturarTodos(Entrenador entrenador, Pokemon* pokemones, int cantidadPokemones);

bool tienePokemonDeTipo(Entrenador entrenador, TipoDePokemon tipoDePokemon);
#include "entrenador.h"

struct EntrenadorSt {

    string nombre;
    int cantidadPokemones;
    int capacidadPokedeck;
    Pokemon* pokemones;

};


// contruye un entrenador
Entrenador mkEntrenador(string nombre){
    Entrenador res = new EntrenadorSt;
    res->nombre = nombre;
    res->cantidadPokemones = 0;
    res->capacidadPokedeck = 1;
    res->pokemones = new Pokemon[1];
    return res;
}

// Agrega dicho pokemon a la lista del entrenador
void capturar(Entrenador entrenador, Pokemon pokemon){

    if (entrenador -> capacidadPokedeck == entrenador -> cantidadPokemones) {
        Pokemon* nuevaPokedeck = new Pokemon[entrenador->capacidadPokedeck * 2];
        for(int i=0; i < entrenador->cantidadPokemones; i++) {
            nuevaPokedeck[i] = entrenador->pokemones[i];
        }
        entrenador->capacidadPokedeck = entrenador->capacidadPokedeck * 2;
        delete [] entrenador->pokemones; 
        entrenador->pokemones = nuevaPokedeck;
    }
    entrenador->pokemones[entrenador->cantidadPokemones] = pokemon; //Agrego el Pok.
    entrenador->cantidadPokemones++;

}

// Devuelve la cantidad de pokemon que posee el entrenador.
int cantPokemones(Entrenador entrenador){
    return entrenador->cantidadPokemones;
}

// Devuelve la cantidad de pokemon de determinado tipo que posee el entrenador.
int cantPokemonesDe(Entrenador entrenador, TipoDePokemon tipoPokemon){
    
    int res = 0;
    for(int i = 0; i < entrenador->cantidadPokemones; i++) {
        if(esTipoDePokemon (entrenador->pokemones[i], tipoPokemon)) {
            res ++;
        }
    }
    return res;

}

// Dada una array de entrenadores devuelve la concatenacion de todos sus pokemon.
Pokemon* concatPokemon(Entrenador* entrenadores, int cantidadEntrenadores){

    Pokemon* cokemones = new Pokemon[capacidadPokedecks(entrenadores, cantidadEntrenadores)];
    int actualIndex = 0;

    for(int i=0; i < cantidadEntrenadores; i++) {
        for(int ind=0; ind < cantPokemones(entrenadores[i]); ind++) {
            cokemones[actualIndex] = iesimo(entrenadores[i], ind);
            actualIndex ++;
        }
    }

    return cokemones;

    //std::cout << "Falta completar concatPokemon" << std::endl;
    //exit(1);
}


// Dado un entrenador, devuelve True si posee al menos un pokemon de cada tipo posible.
bool esMaestro(Entrenador entrenador){

    return tienePokemonDeTipo(entrenador, FUEGO) && 
           tienePokemonDeTipo(entrenador, AGUA) && 
           tienePokemonDeTipo(entrenador, PLANTA);

}

// Dado un entrenador libera la memoria ocupada por el mismo
void destroyEntrenador(Entrenador entrenador){
   
    delete [] entrenador->pokemones;
    delete entrenador;

}






//NUEVAS IMPLEMENTACIONES/////////////////////////////////////////////////////


int capacidadPokedecks(Entrenador* entrenadores, int cantidadEntrenadores) {

    int res = 0;
    for(int i=0; i < cantidadEntrenadores; i++) {
        res = res + cantPokemones(entrenadores[i]);
    }
    return res;

}


Pokemon iesimo(Entrenador entrenador, int indice) {

    return entrenador->pokemones[indice];

}

void capturarTodos(Entrenador entrenador, Pokemon* pokemones, int cantidadPokemones) {

    for(int i=0; i<cantidadPokemones; i++) {
        capturar(entrenador, pokemones[i]);
    }

}

bool tienePokemonDeTipo(Entrenador entrenador, TipoDePokemon tipoPokemon) {

    bool res = false;
    for(int i=0; i < cantPokemones(entrenador); i++) {
        if(esTipoDePokemon (entrenador->pokemones[i], tipoPokemon)) {
            res = true;
        }    
    }
    return res;

}
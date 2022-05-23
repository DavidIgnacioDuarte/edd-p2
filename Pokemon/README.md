# Pokemon

El objetivo de esta clase es implementar el sistema Pokemon. Debe resolverse el ejercicio sin agregar nuevos ficheros en el directorio, ya que se ejecutaran pruebas automaticas para verificar la solucion.

Definir las estructuras de datos Pokemon, como un `string` nombre, un `TipoDePokemon` (alias de `string`)tipoDePokemon ("agua", "fuego" o "planta") y un `int` porcentajeDeEnergia; y Entrenador, como un `string` nombre y un `array` de Pokemon. Luego definir las siguientes funciones:

```c
// Dados un nombre y un tipo construye un pokemon con porcentajeDeEnergia 100
Pokemon mkPokemon(string nombre, TipoDePokemon tipoDePokemon);
```

```c
// Dados dos pokemon indica si el primero, en base al tipo, es superior al segundo. 
// Agua supera a fuego, fuego a planta y planta a agua. Y cualquier otro caso es falso.
bool superaA(Pokemon primero, Pokemon segundo);

// indica si el pokemon es de dicho tipo
bool esTipoDePokemon(Pokemon pokemon, TipoDePokemon tipoDePokemon);

// Dados dos pokemon libera la memoria ocupada por el mismo
void destroyPokemon(Pokemon pokemon);
```

Para poder hacer uso del tipo `string` hay dos mecanismo alternativos.

agregar `std::` como prefijo del tipo e importarlo con `#include <string>`
usar el espacio de nombre agregando la siguiente linea al inicio del programa:

```c
using namespace std;
```

En este punto es recomendable hacer un programa `main` para realizar verifiaciones sobre el programa actual (construir 2 pokemon e imprimir texto en el `standar output` luego de evaluar alguna funcion)    
Es posible compilar la aplicacion con el siguiente comando    

```bash
g++ -o pokemon.app main.cpp pokemon.cpp
```

y ejecutarla mediante `./pokemon.app`.    

Para agregar Entrenador es necesario compilar tambien dicho archivo

```bash
g++ -o entrenador.app main.cpp pokemon.cpp entrenador.cpp
```

y ejecutarla mediante `./entrenador.app`. 

```c
// contruye un entrenador
Entrenador mkEntrenador(string nombre);

// Agrega dicho pokemon a la lista del entrenador
void capturar(Entrenador entrenador, Pokemon pokemon);

// Devuelve la cantidad de pokemon que posee el entrenador.
int cantPokemones(Entrenador entrenador);

// Devuelve la cantidad de pokemon de determinado tipo que posee el entrenador.
int cantPokemonesDe(Entrenador entrenador, TipoDePokemon tipoDePokemon);

// Dado un array de entrenadores devuelve la concatenacion de todos sus pokemon.
Pokemon* concatPokemon(Entrenador* entrenadores, int cantidadEntrenadores);

// Dado un entrenador, devuelve True si posee al menos un pokemon de cada tipo posible.
bool esMaestro(Entrenador entrenador);

// Dado un entrenador libera la memoria ocupada por el mismo
void destroyEntrenador(Entrenador entrenador);
```

# Estructuras de datos

Estructuras de datos con <a href="https://es.wikipedia.org/wiki/C%2B%2B">C++</a>.

## Conceptos

**PROGRAMA:** Descripción ejecutable. Modelo de memoria y cómputo explícitos, y definición de _procedimientos_ y _funciones_ con efectos reales. La ejecución de un programa va a consistir en modificar un estado de la memoria (mediante _variables_) para dejar almacenado algún lugar deseado. G++ compila, pasando nuestro código a código máquina, convirtiendo en un archivo ejecutable.

*ARCHIVOS .H:* relacionan los distintos cpp al crear un _TAD_(module).

*ARCHIVOS .CPP:* incluyen la implementación del programa.

**PUNTERO:** Dirección de memoria y referencia a pedazo de la memoria.

**MEMORIA HEAP:** Memoria del montón, a demanda toda la ram disponible.

**MEMORIA STACK:** Memoria estática, limitada. De la pila.

Una ventaja de usar C++ por sobre Haskell, es que tenemos un control sobre la
memoria, ahora explícita, que nos permite programar modificando su estado y siendo
más eficientes, ya que ésto último podemos chequearlo con nuestra memoria RAM, y 
programas grandes(que en C++ son descripciones ejecutables) pueden optimizarse 
liberando partes de la misma para, por ejemplo, evitar errores de StackOverFlow 
al llenar la limitada Memoria Stack.

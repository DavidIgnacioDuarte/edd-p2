#include "persona.h"

struct PersonaSt {
    int edad;
    string nombre;
    Mascota mascota;
};

Persona nuevaPersona(int edad, string nombre) {
   // devuelve una direccion de memoria
   // con espacio para guardar una persona;
   PersonaSt* dirP = new PersonaSt;
   dirP->edad = edad;
   dirP->nombre = nombre;
   return dirP;
}

void crecer(Persona p) {
    p->edad = p->edad + 1;
}

void mostrarPersona(Persona p) {
    cout << "Persona " << p << " {" << endl;
    cout << " edad: " << p->edad << endl;
    cout << " nombre: " << p->nombre << endl;
    cout << "}" << endl;
}

Mascota obtenerMascota(Persona p) {
    return p->mascota;
}

void asignarMascota(Persona p, Mascota m) {
    p->mascota = m;
}

void destroyPersona(Persona p) {
    delete p;
}


//LA IDENTIDAD ES POR LA DIRECCIÓN DE MEMORIA
//LA IGUALDAD ES POR LOS CAMPOS
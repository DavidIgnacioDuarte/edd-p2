#include "mascota.h"

struct MascotaSt {
    string raza;
    string nombre;
};

Mascota nuevaMascota(string raza, string nombre) {
    MascotaSt* dirM = new MascotaSt;
    dirM->raza = raza;
    dirM->nombre = nombre;
    return dirM;
}
string nombre(Mascota m) {
    return m->nombre;
}

void cambiarNombre(string nombre, Mascota m) {
    m->nombre = nombre;
}

void mostrarMascota(Mascota m) {
    cout << "Mascota " << m << " {" << endl;
    cout << " raza: " << m->raza << endl;
    cout << " nombre: " << m->nombre << endl;
    cout << "}" << endl;
}

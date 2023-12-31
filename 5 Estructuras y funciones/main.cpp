// a. Pasar una estructura por valor como argumento
//
//Escribe una función que tome una estructura Estudiante por valor y imprima sus miembros.
//b. Pasar una estructura por referencia como argumento
//
//Modifica la función anterior para que tome una estructura Estudiante por referencia.
//c. Pasar una estructura por dirección como argumento
//
//Modifica la función anterior para que tome una dirección a una estructura Estudiante.
//d. De la programación funcional a la programación orientada a objetos
//
//Este es un concepto más de C++ que de C, pero puedes intentar imaginar cómo podrías organizar el código de la lista de estudiantes en términos de objetos y métodos en lugar de funciones y estructuras.

#include <iostream>
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    int numeroCuenta;
};

void printEstudiante(Estudiante estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Numero de cuenta: " << estudiante.numeroCuenta << endl;
}

void printEstudianteRef(Estudiante &estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Numero de cuenta: " << estudiante.numeroCuenta << endl;
}

void printEstudiantePtr(Estudiante *estudiante) {
    cout << "Nombre: " << estudiante->nombre << endl;
    cout << "Edad: " << estudiante->edad << endl;
    cout << "Numero de cuenta: " << estudiante->numeroCuenta << endl;
}

int main() {
    Estudiante estudiante = {"Juan", 20, 123456};
    printEstudiante(estudiante);
    printEstudianteRef(estudiante);
    printEstudiantePtr(&estudiante);
    return 0;
}


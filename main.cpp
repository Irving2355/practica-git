#include <iostream>
using namespace std;

void mostrarMenu(){
    cout << "1. Agregar estudiante" << endl;
    cout << "2. Mostrar estudiantes" << endl;
    cout << "3. Salir" << endl;
}

int main(){
    cout << "Sistema de estudiante UAA" << endl;
    cout << "Version 1.0"<< endl;
    mostrarMenu();
    return 0;
}
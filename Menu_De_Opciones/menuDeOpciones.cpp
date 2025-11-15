#include <iostream>

using namespace std;

void mostrarSaludo() {
    cout << "Hola, bienvenido al programa!" << endl;
}
void mostrarDespedida() {
    cout << "Gracias por usar el programa! Adios!" << endl;
}
void salirDelPrograma() {
    cout << "Saliendo del programa..." << endl;
    exit(0);
}

int main(){
    int opcion;

    do {
        cout << "Menu de Opciones:" << endl;
        cout << "1. Mostrar Saludo" << endl;
        cout << "2. Mostrar Despedida" << endl;
        cout << "3. Salir del Programa" << endl;
        cin >> opcion;

        switch(opcion) {
            case 1:
                mostrarSaludo();
                break;
            case 2:
                mostrarDespedida();
                break;
            case 3:
                salirDelPrograma();
                break;
            default:
                cout << "Opcion invalida. Por favor, intente de nuevo." << endl;
        }
    } while(true);

    return 0;
}
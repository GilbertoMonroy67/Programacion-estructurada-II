#include <iostream>

using namespace std;

float promedio(float a, float b, float c) {
    return (a + b + c) / 3;
}

string mostrarResultado(float promedio) {
    if (promedio >= 6.0) {
        return "Aprobado";
    } else {
        return "Reprobado";
    }
}

int main(){
    float calificacion1, calificacion2, calificacion3;

    cout << "Ingrese la primera calificacion: ";
    cin >> calificacion1;
    cout << "Ingrese la segunda calificacion: ";
    cin >> calificacion2;
    cout << "Ingrese la tercera calificacion: ";
    cin >> calificacion3;

    float prom = promedio(calificacion1, calificacion2, calificacion3);
    cout << "El promedio es: " << prom << endl;
    cout << "Resultado: " << mostrarResultado(prom) << endl;

    return 0;
}
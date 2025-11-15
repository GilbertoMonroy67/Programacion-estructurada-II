#include <iostream>

using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: Division por cero no es permitida." << endl;
        return 0;
    }
    return static_cast<float>(a) / b;
}

int main() {
    int opcion;
    int num1, num2;
    cout << "Calculadora Basica" << endl;
    cout << "Seleccione una operacion:" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cin >> opcion;

    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    switch (opcion) {
        case 1:
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case 4:
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
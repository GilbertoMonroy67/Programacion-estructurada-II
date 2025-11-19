#include <iostream>

using namespace std;

int consultarSaldo(int saldo) {
    return saldo;
}
bool retirarDinero(int &saldo, int monto) {
    if (monto > saldo) {
        cout << "Fondos insuficientes." << endl;
        return false;
    }
    saldo -= monto;
    return true;
}
void depositarDinero(int &saldo, int monto) {
    saldo += monto;
}
bool salir() {
    cout << "Gracias por usar el cajero automatico. Hasta luego!" << endl;
    return false;
}

int main() {
    int saldo = 1000; 
    int opcion;
    bool continuar = true;

    cout << "Bienvenido al Cajero Automatico" << endl;

    while (continuar) {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Consultar Saldo" << endl;
        cout << "2. Retirar Dinero" << endl;
        cout << "3. Depositar Dinero" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: $" << consultarSaldo(saldo) << endl;
                break;
            case 2: {
                int montoRetiro;
                cout << "Ingrese el monto a retirar: $";
                cin >> montoRetiro;
                if (retirarDinero(saldo, montoRetiro)) {
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                }
                break;
            }
            case 3: {
                int montoDeposito;
                cout << "Ingrese el monto a depositar: $";
                cin >> montoDeposito;
                depositarDinero(saldo, montoDeposito);
                cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
                break;
            }
            case 4:
                continuar = salir();
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    }

    return 0;
}
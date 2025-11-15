#include <iostream>

using namespace std;

int calcurarTotal(int cantidad, double precio){
    if(precio > 100){
        return cantidad * (precio * 0.9); 
    } else {
        return cantidad * precio;
    }
}
int mostrarTicket(int cantidad, double precio){
    double total = calcurarTotal(cantidad, precio);
    cout << "Cantidad: " << cantidad << endl;
    cout << "Precio unitario: $" << precio << endl;
    cout << "Total a pagar: $" << total << endl;
    return 0;
}

int main() {
    int cantidad;
    double precio;

    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;
    cout << "Ingrese el precio unitario del producto: ";
    cin >> precio;

    mostrarTicket(cantidad, precio);

    return 0;
}
#include <iostream>

using namespace std;

float cambio(float dinero, double total)
{
    if (dinero < total)
    {
        cout << "Dinero insuficiente para pagar el total." << endl;
        return -1;
    }
    else
    {
        return dinero - total;
        cout << "Su cambio es: $" << cambio(dinero, total) << endl;
    }
}

int calcurarTotal(int cantidad, double precio)
{
    if (precio > 100)
    {
        return cantidad * (precio * 0.9);
    }
    else
    {
        return cantidad * precio;
    }
}
int mostrarTicket(int cantidad, double precio)
{
    double total = calcurarTotal(cantidad, precio);
    cout << "Cantidad: " << cantidad << endl;
    cout << "Precio unitario: $" << precio << endl;
    cout << "Total a pagar: $" << total << endl;
    return 0;
}

int main()
{
    int cantidad;
    double precio;
    float dinero;

    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;
    cout << "Ingrese el precio unitario del producto: ";
    cin >> precio;
    cout << "Con cuanto dinero va a pagar?: ";
    cin >> dinero;

    mostrarTicket(cantidad, precio);
    cambio(dinero, calcurarTotal(cantidad, precio));

    return 0;
}
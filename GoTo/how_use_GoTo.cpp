#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, res, sum;
    int option;
    int option1;
    int option2;
salto4:
    cout << "Que operacion desea realizar?\n";
    cout << "1: suma\n";
    cout << "2: Resta\n";
    cout << "3: Multiplicacion\n";
    cout << "4: Salir\n";
    cin >> option;
    switch (option){

    case 1:
    salto1:
        cout << "Ingresa el primer valor\n";
        cin >> a;
        cout << "Ingresa el Segundo valor valor\n";
        cin >> b;
        c = a + b;
        cout << "El resultado es: \n"
             << c << endl;
        cout << "Desea realizar otra Suma?\n";
        cout << "1-Si\n";
        cout << "2-No\n";
        cin >> option1;
        if (option1 == 1)
        {
            goto salto1;
        }
        else if (option1 == 2)
        {
            goto salto4;
        }
        break;

    case 2:
    salto2:
        cout << "Ingresa el primer valor\n";
        cin >> a;
        cout << "Ingresa el Segundo valor valor\n";
        cin >> b;
        c = a - b;
        cout << "El resultado es: \n"
             << c << endl;
        cout << "Desea realizar otra Resta?\n";
        cout << "1-Si\n";
        cout << "2-No\n";
        cin >> option2;
        if (option2 == 1)
        {
            goto salto2;
        }
        else if (option2 == 2)
        {
            goto salto4;
        }

        break;

    case 3:
    salto3:
        cout << "Ingresa el primer valor\n";
        cin >> a;
        cout << "Ingresa el Segundo valor valor\n";
        cin >> b;
        c = a * b;
        cout << "El resultado es: \n"
             << c << endl;
        cout << "Desea realizar otra multiplicacion?\n";
        cout << "1-Si\n";
        cout << "2-No\n";
        cin >> option2;
        if (option2 == 1)
        {
            goto salto3;
        }
        else if (option2 == 2)
        {
            goto salto4;
        }
        break;

    case 4:
        cout << "Muchas gracias\n";
        cout << "Cerrando porgrama.......\n";
        cout << "U   U\n";
        cout << "   0 zzzzzzz\n";
        break;

    default:
        cout << "Opcion no valida, intenta de nuevo\n";
        goto salto1;
        break;
        
    }
}
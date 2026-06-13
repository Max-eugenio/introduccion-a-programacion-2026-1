#include <iostream>
#include <esconu.h>
using namespace std;

int main()
{
    BorraPantalla();

    int saldo = 0;
    int opciones;

    cout << "Menu de cuenta bancaria" << endl;

    cout << "seleccione la opciones (1-4) para ver los diferentes apartados" << endl;
    cout << "--------------------------------------------------------------" << endl << endl;

    cout << "1- ver saldo " << endl;

    cout << "2- Retirar efectivo" << endl;

    cout << "3- depositar efectivo " << endl;

    cout << "4- salir " << endl << endl ;

    cout << "digite que opcion usted quiere aeleccionar: ";
    cin >> opciones;

    cout << endl;

    switch(opciones){
        case 1:
            cout << "su saldo actual  es: " << saldo << endl;
            break;

        case 2:
            cout << "cuanto saldo usted quiere retirar? " << endl;
            cin >> saldo;


            TeclaPresionada("presione cualquier tecla para continuar....");
            BorraPantalla();

            cout << "Banco central" << endl;
            cout << "-------------" << endl << endl;

            cout << "su saldo retirado actual es " << saldo << endl ;
            cout << "----------------------------" << endl << endl;

            TeclaPresionada("presione cualquier tecla para salir....");
            break;

        case 3:
            cout << "Cuanto usted quiere depositar? >> " << saldo;
            cin >> saldo;

            TeclaPresionada("presione cualquier tecla para continuar....");
            BorraPantalla();

            cout << "su saldo que deposito fue " << saldo << endl;

            TeclaPresionada("presione cualquier tecla para salir....");
            break;

        case 4:
           TeclaPresionada("Presione cualquier tecla para confirmar la salida.....");
           break;

        default:
            cout << "usted selecciono una opcion no valida";
           break;
    }
    return 0;
}

#include <iostream>
#include <esconu.h>
using namespace std;

int main()
{
    BorraPantalla();

    int dia;
    int mes;
    int year;


    cout << "adivina el cumple y gana el juego" << endl;

    cout << "digite el dia: ";
    cin >> dia;

    cout << "digite el numero del mes: ";
    cin >> mes;

    cout << "digite el ano: ";
    cin >> year;

    BorraPantalla();

    while (!(dia == 19, mes == 2, year == 2005 ))
    {
        cout << "te equivocaste,intentalo denuevo!" << endl;


        cout << "digite el dia: ";
        cin >> dia;

        cout << "digite el numero del mes: ";
        cin >> mes;

        cout << "digite el ano: ";
        cin >> year;

        BorraPantalla();
    }



    cout << "ganaste!!!!!";
    return 0;
}

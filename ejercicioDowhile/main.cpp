#include <iostream>
#include <esconu.h>
using namespace std;

int main()
{
    BorraPantalla();

    const int CONTRASEINA = 1234;

    int intentoAdivinar = 0 ;
    int intentosHechos;
    int limiteDeintentos = 10;
    bool perdiste = false;




    cout << "adivina los 4 numeros misteriosos" << endl;
    cout << "--------------------------------" << endl << endl;

    do{
        cout << "inserte la clave aqui: ";
        cin >> intentoAdivinar;
        intentosHechos++;




        if (intentoAdivinar > CONTRASEINA)
            cout << "-es muy alto ese numero" << endl;
        else if(intentoAdivinar < CONTRASEINA)
            cout << "-es muy bajo ese numero" << endl;
        else{
            cout << "----------------------" << endl;
            cout << "usted gano el juego!!!" << endl;
            cout << "usted lo intento " << intentosHechos << " veces" << endl;
            cout << "----------------------------------------------" << endl;
        }
    }
    while(intentoAdivinar != CONTRASEINA && intentosHechos < limiteDeintentos );

    if (intentosHechos == limiteDeintentos)
    {
        perdiste = true;
        if(perdiste)
        {
            cout << "----------------------" << endl;
            cout << "usted perdio el juego" << endl ;
            cout << "usted lo intento " << intentosHechos << " veces" << endl;
            cout << "----------------------------------------------" << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <esconu.h>
using namespace std;

int main()
{
    BorraPantalla();


    int dia1;
    int mes1;
    int anio1;

    int dia2;
    int mes2;
    int anio2;

    long fechaCompleta1;
    long fechaCompleta2;

    CoordenadaXY(5,1);
    cout << "Comparador de 2 fechas para ver cual es la reciente" << endl;
    CoordenadaXY(5,2);
    cout << "--------------------------------------------------" << endl << endl ;


    CoordenadaXY(5,4);
    cout << "inserte el dia de la fecha #1: ";
    cin >> dia1;
    CoordenadaXY(5,5);
    cout << "---------------------------------" << endl;

    CoordenadaXY(5,6);
    cout << "inserte el numero del mes de la fecha #1: ";
    cin >> mes1;
    CoordenadaXY(5,7);
    cout << "---------------------------------" << endl;

    CoordenadaXY(5,8);
    cout << "inserte el anio de la fecha #1: ";
    cin >> anio1;
    CoordenadaXY(5,9);
    cout << "---------------------------------" << endl;

    CoordenadaXY(5,21);
    TeclaPresionada("Presione para digitar la segunda fecha >>> ");
    BorraPantalla();

        CoordenadaXY(5,1);
    cout << "Comparador de 2 fechas para ver cual es la reciente" << endl;
    CoordenadaXY(5,2);
    cout << "--------------------------------------------------" << endl << endl ;


    CoordenadaXY(5,4);
    cout << "inserte el dia de la fecha #2: ";
    cin >> dia2;
    CoordenadaXY(5,5);
    cout << "---------------------------------" << endl;

    CoordenadaXY(5,6);
    cout << "inserte el numero del mes de la fecha #2: " ;
    cin >> mes2;
    CoordenadaXY(5,7);
    cout << "---------------------------------" << endl;

    CoordenadaXY(5,8);
    cout << "inserte el anio de la fecha #2: ";
    cin >> anio2;
    CoordenadaXY(5,9);
    cout << "---------------------------------" << endl;


    CoordenadaXY(5,21);
    TeclaPresionada("Presione para ver los resultados >>> ");
    BorraPantalla();

    fechaCompleta1 = (anio1 * 10000) + (mes1 * 100) + dia1;

    fechaCompleta2 = (anio2 * 10000) + (mes2 * 100) + dia2;




    if ( fechaCompleta1 <  fechaCompleta2 )
    {
        CoordenadaXY(5,1);
        cout << "La fecha mas reciente de las dos fue la segunda fecha : " << endl;

        CoordenadaXY(5,3);
        cout << "Dia: " << dia2<< endl;
        CoordenadaXY(5,5);
        cout << "Mes: " << mes2 << endl;
        CoordenadaXY(5,7);
        cout << "Anio: " << anio2 << endl;


    }
    else if ( fechaCompleta1 > fechaCompleta2 )
    {
        CoordenadaXY(5,1);
        cout << "La fecha mas reciente de las dos fue la primera fecha : " << endl;

        CoordenadaXY(5,3);
        cout << "Dia: " << dia1 << endl;
        CoordenadaXY(5,5);
        cout << "Mes: " << mes1 << endl;
        CoordenadaXY(5,7);
        cout << "Anio: " << anio1 << endl;


    }
    else{
        CoordenadaXY(5,1);
        cout << "las fechas que usted introdujo son iguales" << endl;
    }
    CoordenadaXY(5,20);
    cout << "Gracias por utilizar este programa " << endl;
    CoordenadaXY(5,21);
    TeclaPresionada("Presione cualquier tecla para salir----");


    dia1 = 0;
    mes1 = 0;
    anio1 = 0;

    dia2 = 0;
    mes2 = 0;
    anio2 = 0;

    fechaCompleta1 = 0;
    fechaCompleta2 = 0;


    return 0;
}

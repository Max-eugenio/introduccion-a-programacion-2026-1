#include <iostream>
#include <string>
#include <esconu.h>
using namespace std;

int main()
{
    BorraPantalla();

    const float NUMEROPI = 3.1416;

    float radio, areaResultado;

    CoordenadaXY (23, 3);
    cout<<"Este programa calcula el area de un circulo"<<endl;
    CoordenadaXY (23, 4);
    cout<<"*-----------------------------------------*"<<endl<<endl;

    CoordenadaXY (10, 6);
    cout<<"Ingrese el radio para ser calculado>>: ";
    cin>>radio;

    CoordenadaXY (11, 8);
    cout<<"*---------------------------------------*";

    CoordenadaXY (20, 22);
    TeclaPresionada("Presione cualquier tecla para ver el resultado-->>");


    BorraPantalla();

    areaResultado = NUMEROPI / (radio * radio);

    CoordenadaXY (23, 3);
    cout<<"Resultado del calculo"<<endl;
    CoordenadaXY (23, 4);
    cout<<"*------------------------*"<<endl;


    CoordenadaXY(9, 7);
    cout<<"Esta es la area del circulo del radio otorgado: "<<areaResultado;
    CoordenadaXY(9, 8);
    cout<<"*----------------------------------------------*"<<endl;


    return 0;
}

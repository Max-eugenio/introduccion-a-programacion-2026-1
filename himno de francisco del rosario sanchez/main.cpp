#include <iostream>
#include <esconu.h>
#include <string>
using namespace std;

int main()
{
    BorraPantalla();


    const string ESTROFA1_1= "Sanchez glorioso, varon ilustre";
    const string ESTROFA1_2= "Que no supiste jamas hollar,";
    const string ESTROFA1_3= "Los sacros fueros del patriotismo,";
    const string ESTROFA1_4= "Que levantaron el patrio lar.";



    const string ESTROFA2_1= "Tu que juraste morir de hambre,";
    const string ESTROFA2_2= "antes que siervo comer un pan";
    const string ESTROFA2_3= "y lo cumpliste cuando tu cuerpo,";
    const string ESTROFA2_4= "de muerte herido cayo en San Juan.";


    const string ESTROFA3_1= "Tu que en los labios siempre tuviste,";
    const string ESTROFA3_2= "fiero anatema para el Traidor,";
    const string ESTROFA3_3= "que malograra La Patria hermosa, ";
    const string ESTROFA3_4= "por la que dieras vida y honor.";

    const string ESTROFA4_1= "Derecho tienes a que elevemos";
    const string ESTROFA4_2= "en tu memoria cantos de amor,";
    const string ESTROFA4_3= "ningun soldado fue mas glorioso";
    const string ESTROFA4_4= "nadie ha luchado con mas valor.";


    const string ESTROFA5_1= "Cuando miramos llenos de orgullo,";
    const string ESTROFA5_2= "la patria ensena, con que fruicion,";
    const string ESTROFA5_3= "pensamos todos que representa,";
    const string ESTROFA5_4= "la parte roja tu corazon.";



    const string rojo = "*****************", azul = "*****************";
    const string blanco1 = "****", blanco2 = "*******************";


    CoordenadaXY (24, 1);
    cout<<"Himno de Francisco del Rosario Sanchez"<<endl<<endl;

    CoordenadaXY(38, 3);
    ColorTexto(AZUL);
    cout<<"#1"<<endl;

    CoordenadaXY(24, 5);
    cout<<ESTROFA1_1<<endl;
    CoordenadaXY(24, 6);
    cout<<ESTROFA1_2<<endl;
    CoordenadaXY(24, 7);
    cout<<ESTROFA1_3<<endl;
    CoordenadaXY(24, 8);
    cout<<ESTROFA1_4<<endl;

    cout<<endl<<endl<<endl<<endl;

    CoordenadaXY(38, 10);
    ColorTexto(BLANCO);
    cout<<"#2"<<endl;

    CoordenadaXY(24, 12);
    cout<<ESTROFA2_1<<endl;
    CoordenadaXY(24 ,13);
    cout<<ESTROFA2_2<<endl;
    CoordenadaXY(24, 14);
    cout<<ESTROFA2_3<<endl;
    CoordenadaXY(24, 15);
    cout<<ESTROFA2_4<<endl;

    cout<<endl<<endl<<endl<<endl;


    CoordenadaXY( 24, 22);
    ColorTexto(PREESTABLECIDO);
    TeclaPresionada("presione cualquier tecla para ver mas>>");

    BorraPantalla();

    CoordenadaXY(38, 3);
    ColorTexto(ROJOCLARO);
    cout<<"#3"<<endl;

    CoordenadaXY(24, 5);
    cout<<ESTROFA3_1<<endl;
    CoordenadaXY(24, 6);
    cout<<ESTROFA3_2<<endl;
    CoordenadaXY(24 ,7);
    cout<<ESTROFA3_3<<endl;
    CoordenadaXY(24, 8);
    cout<<ESTROFA3_4<<endl;

    cout<<endl<<endl<<endl<<endl;


    CoordenadaXY(38, 10);
    ColorTexto(BLANCO);
    cout<<"#4"<<endl;

    CoordenadaXY(24, 12);
    cout<<ESTROFA4_1<<endl;
    CoordenadaXY(24 ,13);
    cout<<ESTROFA4_2<<endl;
    CoordenadaXY(24, 14);
    cout<<ESTROFA4_3<<endl;
    CoordenadaXY(24, 15);
    cout<<ESTROFA4_4<<endl;


    CoordenadaXY( 24, 22);
    ColorTexto(PREESTABLECIDO);
    TeclaPresionada("presione cualquier tecla para ver mas>>");

    BorraPantalla();

    cout<<endl<<endl<<endl<<endl;


    CoordenadaXY(38, 3);
    ColorTexto(AZUL);
    cout<<"#5"<<endl;

    CoordenadaXY(24, 5);
    cout<<ESTROFA5_1<<endl;
    CoordenadaXY(24, 6);
    cout<<ESTROFA5_2<<endl;
    CoordenadaXY(24 ,7);
    cout<<ESTROFA5_3<<endl;
    CoordenadaXY(24, 8);
    cout<<ESTROFA5_4<<endl;

    CoordenadaXY( 24, 22);
    ColorTexto(PREESTABLECIDO);
    TeclaPresionada("presione para ver la bandera dominicana>>");

    BorraPantalla();

    CoordenadaXY(15, 1);
    ColorFondoTexto(ROJOCLARO);
    ColorTexto(ROJOCLARO);
    cout << "Esta es la ";
    ColorTexto(BLANCOCLARO);
    cout << "bandera ";
    ColorTexto(AZUL);
    cout << "de la Republica Dominicana ";

    CoordenadaXY(15, 3);
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;

    CoordenadaXY(15, 4);
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;

    CoordenadaXY(15, 5);
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;

    CoordenadaXY(15, 6);
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;

    CoordenadaXY(15, 7);
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;

    CoordenadaXY(15, 8);
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;

    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(15, 9);
    cout << blanco2 + blanco2;
    CoordenadaXY(15, 10);
    cout << blanco2 + blanco2;

    CoordenadaXY(15, 11);
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;

    CoordenadaXY(15, 12);
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;

    CoordenadaXY(15, 13);
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;

    CoordenadaXY(15, 14);
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;

    CoordenadaXY(15, 15);
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;

    CoordenadaXY(15, 16);
    ColorTexto(ROJOCLARO);
    ColorFondoTexto(ROJOCLARO);
    cout << rojo;
    ColorTexto(BLANCOCLARO);
    ColorFondoTexto(BLANCOCLARO);
    cout << blanco1;
    ColorTexto(AZUL);
    ColorFondoTexto(AZUL);
    cout << azul;

    ColorTexto(PREESTABLECIDO);

    return 0;
}

#include <iostream>
#include <esconu.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    BorraPantalla();


    const float LIBRAS_A_KILOGRAMOS = 2.205;
    const float CENTIMETROS_POR_PIE = 30.48;
    const float CENTIMETROS_POR_PULGADA = 2.54;



    int cantidadDePies;
    int cantidadDePulgadas;
    int edadDelUsuario;
    int opcionMenuPrincipal;
    int nivelDeActividadFisica;


    float pesoEnLibras;
    float alturaEnMetros;
    float alturaEnCentimetros;
    float pesoEnKilogramos;
    float tasaMetabolicaBasal;
    float indiceDeMasaCorporal;
    float caloriasDiariasRecomendadas;

    string sexoDelUsuario;
    string nombreDelUsuario;
    string apellidoDelUsuario;

    opcionMenuPrincipal = 0;

    while(opcionMenuPrincipal != 2)
    {
        ColorTexto(BLANCO);
        ColorFondoTexto(AZULCLARO);
        CoordenadaXY(9,1);
        cout << "Calculadora de Tasa Metabolica Basal con IMC incluido" << endl;
        CoordenadaXY(9,2);
        cout << "----------------------------------------------------" << endl;

        ColorFondoTexto(AZULCLARO);
        CoordenadaXY(9,4);
        cout << "-seleccione una opcion- " << endl;

        CoordenadaXY(9,8);
        ColorFondoTexto(VERDECLARO);
        cout << "1-Entrar al programa" << endl;

        CoordenadaXY(9,10);
        ColorFondoTexto(ROJOCLARO);
        cout << "2-Salir del pograma" << endl;

        ColorFondoTexto(AZULCLARO);
        CoordenadaXY(9,14);
        cout << "inserte su opcion preferida(1 o 2):";
        cin >> opcionMenuPrincipal;

        ColorFondoTexto(NEGRO);

        switch(opcionMenuPrincipal)
        {
            case 1:
                BorraPantalla();
                ColorFondoTexto(NEGRO);

                CoordenadaXY(9,1);
                ColorTexto(BLANCO);
                ColorFondoTexto(AZULCLARO);
                cout << "Calculadora de Tasa Metabolica Basal con IMC incluido" << endl;
                CoordenadaXY(9,2);
                cout << "----------------------------------------------------" << endl;

                ColorFondoTexto(NEGRO);
                CoordenadaXY(6,5);
                cout << "Digite su Nombre:";
                ColorFondoTexto(NEGROCLARO);
                cin >> nombreDelUsuario;

                ColorFondoTexto(NEGRO);
                CoordenadaXY(6,6);
                cout << "Digite su Apellido:";
                ColorFondoTexto(NEGROCLARO);
                cin >> apellidoDelUsuario;

                ColorFondoTexto(NEGRO);
                CoordenadaXY(6,7);
                cout << "Digite su edad:";
                ColorFondoTexto(NEGROCLARO);
                cin >> edadDelUsuario;

                ColorFondoTexto(NEGRO);
                CoordenadaXY(6,8);
                cout << "Digite su sexo(H/M):";
                ColorFondoTexto(NEGROCLARO);
                cin >> sexoDelUsuario;

                ColorFondoTexto(NEGRO);
                CoordenadaXY(6,10);
                cout << "Digite su altura en pies y pulgadas acontinuacion " << endl;
                CoordenadaXY(6,11);
                cout << "-------------------------------------------------" << endl;
                CoordenadaXY(6,12);
                cout << "Pies:";
                ColorFondoTexto(NEGROCLARO);
                cin >> cantidadDePies;

                ColorFondoTexto(NEGRO);
                CoordenadaXY(6,13);
                cout << "pulgadas:";
                ColorFondoTexto(NEGROCLARO);
                cin >> cantidadDePulgadas;

                ColorFondoTexto(NEGRO);
                CoordenadaXY(6,15);
                cout <<"Digite su peso en libras:";
                ColorFondoTexto(NEGROCLARO);
                cin >> pesoEnLibras;

                ColorFondoTexto(NEGRO);

                CoordenadaXY(6,21);
                TeclaPresionada("Presione cualquier tecla para seguir--->>");
                BorraPantalla();

                ColorFondoTexto(AZULCLARO);
                CoordenadaXY(6,1);
                cout <<"Cual es su actividad fisica?" << endl;

                ColorFondoTexto(NEGRO);
                CoordenadaXY(6,4);
                cout << "1. Nula = No hago nada de ejercicio." << endl;
                CoordenadaXY(6,5);
                cout << "2. Leve = Hago ejercicio dos veces a la semana." << endl;
                CoordenadaXY(6,6);
                cout << "3. Moderado = Hago ejercicio cuatro veces a la semana.  " << endl;
                CoordenadaXY(6,7);
                cout << "4. Regular = Hago ejercicio regular seis dias a la semana." << endl;
                CoordenadaXY(6,8);
                cout << "5. Extrema = Soy deportista profesional." << endl;

                CoordenadaXY(9,10);
                cout <<"Digite su actividad fisica (1-5):";
                ColorFondoTexto(NEGROCLARO);
                cin >> nivelDeActividadFisica;

                ColorFondoTexto(NEGRO);


                pesoEnKilogramos = pesoEnLibras / LIBRAS_A_KILOGRAMOS;
                alturaEnCentimetros = (cantidadDePies * CENTIMETROS_POR_PIE) + (cantidadDePulgadas * CENTIMETROS_POR_PULGADA);
                alturaEnMetros = alturaEnCentimetros / 100.0;

                if (sexoDelUsuario == "H" || sexoDelUsuario == "h")
                {
                    tasaMetabolicaBasal = (10 * pesoEnKilogramos) + (6.25 * alturaEnCentimetros) - (5 * edadDelUsuario) + 5;
                }
                else
                    if (sexoDelUsuario == "M" || sexoDelUsuario == "m")
                   {
                      tasaMetabolicaBasal = (10 * pesoEnKilogramos) + (6.25 * alturaEnCentimetros) - (5 * edadDelUsuario) - 161;
                     }
                      else
                       {
                          tasaMetabolicaBasal = 0;
                          }


                switch(nivelDeActividadFisica)
                {
                    case 1:
                        caloriasDiariasRecomendadas = tasaMetabolicaBasal * 1.2;
                        break;
                    case 2:
                        caloriasDiariasRecomendadas = tasaMetabolicaBasal * 1.375;
                        break;
                    case 3:
                        caloriasDiariasRecomendadas = tasaMetabolicaBasal * 1.55;
                        break;
                    case 4:
                        caloriasDiariasRecomendadas = tasaMetabolicaBasal * 1.725;
                        break;
                    case 5:
                        caloriasDiariasRecomendadas = tasaMetabolicaBasal * 1.9;
                        break;
                    default:
                        caloriasDiariasRecomendadas = tasaMetabolicaBasal;
                        break;
                }

                cout << fixed << setprecision(2);
                BorraPantalla();
                CoordenadaXY(9,1);
                cout << "Resultados para: " << nombreDelUsuario << " "<< apellidoDelUsuario << endl;
                CoordenadaXY(9,2);
                cout << "----------" << endl;
                CoordenadaXY(9,4);
                cout << "Se le recomienda comer: " << caloriasDiariasRecomendadas << " Calorias diarias" << endl;

                indiceDeMasaCorporal = pesoEnKilogramos / pow(alturaEnMetros, 2);
                CoordenadaXY(9,6);
                cout << "Su IMC es: " << indiceDeMasaCorporal << endl;

                CoordenadaXY(9,8);

                if (indiceDeMasaCorporal < 18.5)
                    {
                      ColorTexto(AMARILLO);
                      cout << "Estado: Bajo peso.";
                    }
                else if (indiceDeMasaCorporal <= 24.99)
                    {
                      ColorTexto(VERDECLARO);
                      cout << "Estado: Normal.";
                    }
                else if (indiceDeMasaCorporal <= 29.99)
                    {
                      ColorTexto(AMARILLO);
                      cout << "Estado: Sobrepeso.";
                    }
                else
                    {
                      ColorTexto(ROJOCLARO);
                      cout << "Estado: Obesidad.";
                    }
                ColorTexto(PREESTABLECIDO);

                CoordenadaXY(9,12);
                TeclaPresionada("Presione una tecla para volver.");
                BorraPantalla();
                break;
        }

    }



    return 0;
}

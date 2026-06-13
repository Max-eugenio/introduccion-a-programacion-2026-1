#include <iostream>
#include <esconu.h>
#include <string>
#include <iomanip>

using namespace std;

double calculo_ImpuestoSobrelarenta(double sueldoBruto_ISR);

double calculadora_Descuento_cooperativa(double sueldoBrutoCoop, char tenercooperativa);

double calcular_bono_de_regalo(double sueldoBruto_bonoregalo);

double calculo_sueldo_netoFinal(double sueldoBruto_def, double isr, double cooperativa, double club, double bono);

int main()
{
    BorraPantalla();

    const int MAX = 100;
    const double CUOTA_FIJA_CLUB = 500.00;
    const double PORCENTAJE_AHORRO_COOP = 0.10;


    char opcion;
    char clubSN[MAX];
    char coopSN[MAX];

    string nombreEmpleado[MAX];
    string apellidoEmpleado[MAX];

    double sueldoBruto_empleado[MAX];

    double Impuesto_Calculado;
    double Cooperativa_Calculada;
    double club_calculado;
    double bono_calculado;
    double sueldoNeto_calculado;
    double montoClub;

    int totalEmpleados;
    int consultaEmpleados;
    int indiceActual;

    totalEmpleados = 0;

    do
    {
        ColorTexto(AZULCLARO);
        CoordenadaXY(30, 1);
        cout << "Churrumusco company" << endl;
        CoordenadaXY(22, 2);
        cout << "Sistema de automatizacion de nomina" << endl << endl;
        CoordenadaXY(31, 4);
        cout << "Menu Principal" << endl << endl << endl;

        ColorTexto(PREESTABLECIDO);
        CoordenadaXY(15, 6);
        cout << "1) Registrar empleado" << endl;
        CoordenadaXY(15, 7);
        cout << "2) Consultar empleado" << endl;
        CoordenadaXY(15, 8);
        cout << "3) Generar nomina" << endl;
        CoordenadaXY(15, 9);
        cout << "4) Salir del sistema" << endl << endl;

        CoordenadaXY(15, 11);
        cout << "Escoge una opcion --->>";
        opcion = LeeCaracterEco();

        BorraPantalla();
        cout << endl;

        switch(opcion)
        {
            case '1':
                BorraPantalla();
                if(totalEmpleados < MAX)
                {
                    ColorTexto(AZULCLARO);
                    CoordenadaXY(30, 1);
                    cout << "Churrumusco company" << endl;
                    CoordenadaXY(22, 2);
                    cout << "Sistema de automatizacion de nomina" << endl << endl;
                    CoordenadaXY(31, 4);
                    cout << "Registro de Empleados" << endl << endl;

                    ColorTexto(PREESTABLECIDO);
                    CoordenadaXY(15, 6);
                    cout << "Empleado No. " << (totalEmpleados + 1) << endl;


                    CoordenadaXY(15, 8);  cout << "Nombre               : ";
                    cin >> nombreEmpleado[totalEmpleados];
                    CoordenadaXY(15, 9);  cout << "Apellido             : ";
                    cin >> apellidoEmpleado[totalEmpleados];
                    CoordenadaXY(15, 10); cout << "Sueldo Bruto         : ";
                    cin >> sueldoBruto_empleado[totalEmpleados];

                    CoordenadaXY(15, 11); cout << "Cooperativa (S/N)    : ";
                    coopSN[totalEmpleados] = LeeCaracterEco();
                    cout << endl;

                    CoordenadaXY(15, 12); cout << "Club (S/N)           : ";
                    clubSN[totalEmpleados] = LeeCaracterEco();
                    cout << endl;

                    totalEmpleados++;

                    CoordenadaXY(15, 15); cout << "¡ Empleado registrado exitosamente!" << endl;
                }
                else
                {
                    cout << "Error: Limite maximo de 100 empleados alcanzado." << endl;
                }

                cout << endl;
                TeclaPresionada("Presione cualquier tecla para volver al menu>>>");
                BorraPantalla();
                break;

            case '2':
                BorraPantalla();
                ColorTexto(AZULCLARO);
                CoordenadaXY(30, 1);
                cout << "Churrumusco company" << endl;
                CoordenadaXY(22, 2);
                cout << "Sistema de automatizacion de nomina" << endl << endl;
                CoordenadaXY(31, 4);
                cout << "Consulta de Empleado" << endl << endl;

                ColorTexto(PREESTABLECIDO);
                CoordenadaXY(15, 6); cout << "Introduzca el Numero de Identificacion a Consultar: ";
                cin >> consultaEmpleados;
                cout << endl;

                if(consultaEmpleados > 0 && consultaEmpleados <= totalEmpleados)
                {
                    indiceActual = consultaEmpleados - 1;

                    if(clubSN[indiceActual] == 'S' || clubSN[indiceActual] == 's')
                    {
                        montoClub = CUOTA_FIJA_CLUB;
                    }
                    else
                    {
                        montoClub = 0.0;
                    }

                    Impuesto_Calculado = calculo_ImpuestoSobrelarenta(sueldoBruto_empleado[indiceActual]);
                    Cooperativa_Calculada = calculadora_Descuento_cooperativa(sueldoBruto_empleado[indiceActual], coopSN[indiceActual]);
                    club_calculado = montoClub;
                    bono_calculado = calcular_bono_de_regalo(sueldoBruto_empleado[indiceActual]);

                    sueldoNeto_calculado = calculo_sueldo_netoFinal(sueldoBruto_empleado[indiceActual], Impuesto_Calculado, Cooperativa_Calculada, club_calculado, bono_calculado);

                    cout << fixed << setprecision(2);
                    cout << "---------------------------------------------" << endl;

                    ColorTexto(PREESTABLECIDO);
                    cout << "Nombre               : ";
                    ColorTexto(VERDE);
                    cout << nombreEmpleado[indiceActual] << endl;

                    ColorTexto(PREESTABLECIDO);
                    cout << "Apellido             : ";
                    ColorTexto(VERDE);
                    cout << apellidoEmpleado[indiceActual] << endl;

                    ColorTexto(PREESTABLECIDO);
                    cout << "Sueldo Bruto         : ";
                    ColorTexto(VERDE);
                    cout << sueldoBruto_empleado[indiceActual] << endl;

                    ColorTexto(PREESTABLECIDO);
                    cout << "ISR                  : ";
                    ColorTexto(ROJOCLARO);
                    cout << Impuesto_Calculado << endl;

                    ColorTexto(PREESTABLECIDO);
                    cout << "Cooperativa          : ";
                    ColorTexto(ROJOCLARO);
                    cout << Cooperativa_Calculada << endl;

                    ColorTexto(PREESTABLECIDO);
                    cout << "Club                 : ";
                    ColorTexto(ROJOCLARO);
                    cout << club_calculado << endl;

                    ColorTexto(PREESTABLECIDO);
                    cout << "Bono                 : ";
                    ColorTexto(ROJOCLARO);
                    cout << bono_calculado << endl;

                    ColorTexto(PREESTABLECIDO);
                    cout << "Sueldo Neto          : ";
                    ColorTexto(AZULCLARO);
                    cout << sueldoNeto_calculado << endl;

                    ColorTexto(PREESTABLECIDO);
                    cout << "---------------------------------------------" << endl;

                }
                else
                {
                    cout << "Error: El empleado con el numero " << consultaEmpleados << " no existe." << endl;
                }

                cout << endl;
                ColorTexto(ROJOCLARO);
                TeclaPresionada("Presione cualquier tecla para volver al menu>>>");
                BorraPantalla();

                ColorTexto(PREESTABLECIDO);
                break;

            case '3':
                BorraPantalla();
                ColorTexto(AZULCLARO);
                CoordenadaXY(30, 1);
                cout << "Churrumusco company" << endl;
                CoordenadaXY(22, 2);
                cout << "Sistema de automatizacion de nomina" << endl << endl;
                CoordenadaXY(26, 5);
                cout << "Reporte General de Nomina" << endl << endl;

                ColorTexto(PREESTABLECIDO);
                if(totalEmpleados > 0)
                {
                    cout << left << setw(15) << "Nombre" << setw(15) << "Apellido" << "Sueldo Neto" << endl;
                    cout << "-------------------------------------------------------" << endl;

                    for(int i = 0; i < totalEmpleados; i++)
                    {
                        if(clubSN[i] == 'S' || clubSN[i] == 's')
                        {
                            montoClub = CUOTA_FIJA_CLUB;
                        }
                        else
                        {
                            montoClub = 0.0;
                        }

                        Impuesto_Calculado = calculo_ImpuestoSobrelarenta(sueldoBruto_empleado[i]);
                        Cooperativa_Calculada = calculadora_Descuento_cooperativa(sueldoBruto_empleado[i], coopSN[i]);
                        club_calculado = montoClub;
                        bono_calculado = calcular_bono_de_regalo(sueldoBruto_empleado[i]);

                        sueldoNeto_calculado = calculo_sueldo_netoFinal(sueldoBruto_empleado[i], Impuesto_Calculado, Cooperativa_Calculada, club_calculado, bono_calculado);

                        ColorTexto(VERDE);
                        cout << left << setw(15) << nombreEmpleado[i]
                             << setw(15) << apellidoEmpleado[i]
                             << fixed << setprecision(2) << sueldoNeto_calculado << endl;
                        ColorTexto(PREESTABLECIDO);
                    }
                    cout << "-------------------------------------------------------" << endl;
                }
                else
                {
                    cout << "No hay empleados registrados en el sistema actualmente." << endl;
                }

                cout << endl;
                TeclaPresionada("Presione cualquier tecla para volver al menu>>>");
                BorraPantalla();
                break;
        }
    } while(opcion != '4');

    totalEmpleados = 0;
    consultaEmpleados = 0;
    Impuesto_Calculado = 0.0;
    Cooperativa_Calculada = 0.0;
    club_calculado = 0.0;
    bono_calculado = 0.0;
    sueldoNeto_calculado = 0.0;
    montoClub = 0.0;

    cout << "Gracias por utilizar este programa!!!" << endl;
    return 0;
}


double calculo_ImpuestoSobrelarenta(double sueldoBruto_ISR)
{
    if(sueldoBruto_ISR <= 15000.00)
       return 0.0;
    else
        if(sueldoBruto_ISR <= 25000.00)
           return sueldoBruto_ISR * 0.05;
        else
            if(sueldoBruto_ISR <= 50000.00)
               return sueldoBruto_ISR * 0.08;
            else
                if(sueldoBruto_ISR <= 75000.00)
                   return sueldoBruto_ISR * 0.10;
                else
                   return sueldoBruto_ISR * 0.15;
}

double calculadora_Descuento_cooperativa(double sueldoBrutoCoop, char tenercooperativa)
{
    const double PORCENTAJE_AHORRO_COOP_LOCAL = 0.10;
    if(tenercooperativa == 'S' || tenercooperativa == 's')
       return sueldoBrutoCoop * PORCENTAJE_AHORRO_COOP_LOCAL;

    return 0.0;
}

double calcular_bono_de_regalo(double sueldoBruto_bonoregalo)
{
    if(sueldoBruto_bonoregalo < 5000.00)
       return 1000.00;
    else
        if(sueldoBruto_bonoregalo >= 5000.01 && sueldoBruto_bonoregalo < 10000.00)
           return 800.00;


    return 0.0;
}

double calculo_sueldo_netoFinal(double sueldoBruto_def, double isr, double cooperativa, double club, double bono)
{
      return (sueldoBruto_def - isr - cooperativa - club) + bono;
}





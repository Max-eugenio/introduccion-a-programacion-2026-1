#include <iostream>
#include <esconu.h>
using namespace std;

int main()
{
   BorraPantalla();


   float sumatoria;
   float sumatotal;

   sumatoria = 0;
   sumatotal = 0;


   float temperaturasC[5] = {32.0, 23.0, 27.0, 24.0, 25.0};


   cout << "sumatoria de las siguientes temperaturas" << endl;

   cout << temperaturasC[0] << endl;
   cout << temperaturasC[1] << endl;
   cout << temperaturasC[2] << endl;
   cout << temperaturasC[3] << endl;
   cout << temperaturasC[4] << endl;

   TeclaPresionada("presione para ver los resultados---->>>>");





 for(int i = 0; i < 5; i++)
{

    sumatotal += temperaturasC[i];

    // Validación de temperatura alta (Aplicación real)
    if(temperaturasC[i] > 30.0)
    {
        cout << endl;
        cout << "Alerta: " << temperaturasC[i] << "C es una temperatura alta." << endl;
    }
}
   cout << endl;


   cout << "La suma total "<< sumatotal;


    return 0;
}

#include <iostream>
#include <esconu.h>
using namespace std;

int main()
{
    BorraPantalla();

    int num;
    int numsum;

    numsum = 0;




    cout << "sumador magico" << endl;
    cout << "--------------" << endl << endl;


    cout << "entra un digito: ";
    cin >> num;

    cout << endl;

    while(num != 0)
    {
        numsum = numsum + num;

        cout << "entra un digito: ";
        cin >> num;

        cout << endl;
    }



    cout << "el total de la sumatoria es "<< numsum;

    return 0;
}

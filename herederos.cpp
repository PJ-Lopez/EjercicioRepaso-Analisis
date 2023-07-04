#include <iostream>
using namespace std;

int main()
{
    float superficie;
    int Ngeneraciones;
    int generaciones[50];
    cout << "Ingrese la superficie inicial: ";
    cin >> superficie;
    cout << "Ingrese el numero de generaciones: ";
    cin >> Ngeneraciones;

    for (int i = 0; i < Ngeneraciones; i++)
    {
        cout << "Ingrese el numero de herederos para la generacion " << i + 1 << ": ";
        cin >> generaciones[i];
    }

    for (int j = 0; j < Ngeneraciones; j++)
    {
        superficie = superficie / generaciones[j];
    }
    cout << "Superficie en la generacion " << Ngeneraciones << ": " << superficie;
}
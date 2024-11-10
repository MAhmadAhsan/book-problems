#include <iostream>
using namespace std;
int main()
{
    float tempInCelsius,tempInFarenhite;
    int type;
    cout << "Type 1 to convert Fahrenheit to Celsius,\n     2 to convert Celsius to Fahrenheit: ";
    cin >> type;
    switch (type)
    {
    case 1:
    {
        cout << "Enter Temperature in Farenhite: ";
        cin >> tempInFarenhite;
        cout << "Temperature in Celsius is: " << (5.0 / 9.0) * (tempInFarenhite - 32);
        break;
    }
    case 2:
    {
        cout << "Enter Temperature in Celsius: ";
        cin >> tempInCelsius;
        cout << "Temperature in Farenhite is: " << (((9.0 / 5.0)) * tempInCelsius) + 32;
        break;
    }
    default:
    {
        cout << "You Enter Invalid Option" << endl;
        break;
    }
    }
    return 0;
}
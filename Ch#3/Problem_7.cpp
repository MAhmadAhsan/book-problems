#include <iostream>
using namespace std;

int main()
{

    float initialAmount, numberOfYears, intersetRate, rate;
    cout << "Enter Initial Amount " << endl;
    cin >> initialAmount;
    cout << "Enter Number of years " << endl;
    cin >> numberOfYears;
    cout << "Enter Interest rate " << endl;
    cin >> intersetRate;

    for (int i = 1; i <= numberOfYears; i++)
    {
        rate = initialAmount * (intersetRate / 100);
        initialAmount = initialAmount + rate;
    }

    cout << initialAmount;

    return 0;
}